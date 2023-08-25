//quay lui co ban
Backtracking(k) {
	for([M?i phuong án ch?n i(thu?c t?p D)]) {
		if ([Ch?p nh?n i]) {
			[Ch?n i cho X[k]];
			if ([Thành công]) {
				[Ðua ra k?t qu?];
			} else {
				Backtracking(k+1);
				[B? ch?n i cho X[k]];
			}
		}
	}
}

