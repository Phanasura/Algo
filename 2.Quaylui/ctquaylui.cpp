//quay lui co ban
Backtracking(k) {
	for([M?i phuong �n ch?n i(thu?c t?p D)]) {
		if ([Ch?p nh?n i]) {
			[Ch?n i cho X[k]];
			if ([Th�nh c�ng]) {
				[�ua ra k?t qu?];
			} else {
				Backtracking(k+1);
				[B? ch?n i cho X[k]];
			}
		}
	}
}

