#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("");
string s;
int degree(char c){
	if (c=='^') return 500;
	if (c=='*' || c=='/') return 400;
	if (c=='+' || c=='-') return 300;
	return 200;
}
string inftopost(string s){
	string res = "";
	stack<char> stk;
	for (int i=0;i<s.size();i++){
		if (s[i] >='0' && s[i]<='9') res+=s[i];
		else if (s[i] == '(') stk.push(s[i]);
		else if (s[i] == ')')
		{
			while (stk.size() && stk.top() !='('){
				res+=stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
			if (res[res.size()-1] >='0' && res[res.size()-1]<='9') res+='#';
			while (stk.size() && degree(stk.top()) >= degree(s[i])){
				res+= stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	while (stk.size()){
		if (stk.top()!='(') res+=stk.top();
		stk.pop();
	}	
	return res;
}
void readin(){
	cin >> s;
}

void solve(){
	s=inftopost(s);
	stack<long long> stk;
	int len = s.size();
	for (int i=0;i<len;i++){
		if (s[i] == '+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
			long long a = stk.top(); stk.pop();
			long long b = stk.top(); stk.pop();
			long long tmp;
			if (s[i]=='+') tmp=b+a;
			else if (s[i]=='-') tmp=b-a;
			else if (s[i]=='*') tmp=b*a;
			else if (s[i]=='/') tmp=b/a;
			else if (s[i]=='%') tmp=b%a;
			else if (s[i]=='^'){
				tmp=b;
				for (int i=0;i<a-1;i++) tmp*=b;
			}
			stk.push(tmp);
		}
		else{
			long long tmp=0;
			while (i<s.size() && s[i]>='0' && s[i]<='9'){
				tmp = 10*tmp+(int)(s[i]-'0');
				i++;
			}
			if (s[i] != '#') i--;
			stk.push(tmp);
		}
	}
	cout << stk.top()<<endl;
}

int main(){
	readin();
	solve();
	return 0;
	fi.close();
	fo.close();
}
