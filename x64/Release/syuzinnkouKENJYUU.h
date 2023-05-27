

#ifndef DEF_syuzinnkouKENJYUU_H //二重include防止

#define DEF_syuzinnkouKENJYUU_H



void KENJYUU() {
	//LEFTmark = 44444;
	if (migimuki == 1) {
		if (Gtime == 5) {
			playerHPlock = 1;//主人公のHPが200以下の時に1になることで銃を撃つ画像が瀕死状態の画像に上書きされない。
			zannzoulock = 1;
			playerKENJYUUImage = playerKENJYUU[0]; //左横向きの状態にする
		}
		if (Gtime == 10) {
			playerKENJYUUImage = playerKENJYUU[1]; //左横向きの状態にする
		}
		if (Gtime == 15) {
			playerKENJYUUImage = playerKENJYUU[2]; //左横向きの状態にする
		}
		if (Gtime == 20) {
			playerKENJYUUImage = playerKENJYUU[3]; //左横向きの状態にする
		}
		if (Gtime == 30) {
			playerKENJYUUImage = playerKENJYUU[4]; //左横向きの状態にする
			playerHPlock = 0;

		}
	}

	if (hidarimuki == 1) {
		if (Gtime == 5) {
			playerHPlock = 1;//主人公のHPが200以下の時に1になることで銃を撃つ画像が瀕死状態の画像に上書きされない。
			zannzoulock = 1;
			playerKENJYUUImage = playerKENJYUUhidari[0]; //左横向きの状態にする
		}
		if (Gtime == 10) {
			playerKENJYUUImage = playerKENJYUUhidari[1]; //左横向きの状態にする
		}
		if (Gtime == 15) {
			playerKENJYUUImage = playerKENJYUUhidari[2]; //左横向きの状態にする
		}
		if (Gtime == 20) {
			playerKENJYUUImage = playerKENJYUUhidari[3]; //左横向きの状態にする
		}
		if (Gtime == 30) {
			playerKENJYUUImage = playerKENJYUUhidari[4]; //左横向きの状態にする
			playerHPlock = 0;

		}
	}

	/*if (Gtime == 39) {
		
		Gtime = 0; //銃を撃ってからの経過時間を0に戻す
		//DrawExtendGraph(0, 0, 1770, 980, SHOTHandle, FALSE);
		
		//nanameidouX = 0;★後ろに少し下がっていた原因。
		nextattack = 0;
		KENJYUUgazou = 0;
		zannzoulock = 0;
		//playerHPlock = 0;
		tabakosuenai = 0;
	}*/
	if (Gtime > 0 && playerHPsubun == 0 &&  playerHP > 0) {
		
		DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 - 13 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerKENJYUUImage, TRUE);
	}
}

#endif