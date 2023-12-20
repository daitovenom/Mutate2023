#pragma once // 二重include防止

void enemydamegegazou1() {

	//差分での奴は他の差分が0の時に他の攻撃で再び差分が上がるので攻撃を食らいながらも違う画像で攻撃になるのでこっちの書き方にした。
	if (enemyzannzoulockframe1 > 0 && ++enemyzannzoulockframe1 < 150) {//100くらいがちょうどいい、50だと
		//enemyKENJYUUcount = 0;
		point = 191919;
		enemyzannzoulock2 = 1;//★「通常状態」のダメージを食らった際の半透明について
		//★敵の画像を一時的に消す。これでダメージを食らったっぽくなる。
		//ここで敵が一瞬消えてif (enemyzannzoulockframe > 25) で0になるので、以前に書いた敵の通常状態の画像が半透明になる。
		//KABURI = 1;
		//★主人公の攻撃中も敵の攻撃中が攻撃した際に敵の攻撃が描画されるようにここに書いた。
		if (enemyzannzoulockframe1 > 0 && enemyzannzoulockframe1 < 5) {
			DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 0, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemy2damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockframe1 > 10 && enemyzannzoulockframe1 < 15) {
			DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 0, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemy2damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockframe1 > 20 && enemyzannzoulockframe1 < 25) {
			DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 0, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemy2damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockframe1 > 30 && enemyzannzoulockframe1 < 35) {
			DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 0, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemy2damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockframe1 > 40 && enemyzannzoulockframe1 < 45) {
			DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 0, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemy2damegeHandle[0], TRUE);
			enemyzannzoulockframe1 = 1;
		}

	}
	if (stayhereframe > 0 && ++stayhereframe > 150) {
		stayhereframe = 0;
		ranndamulock = 0;//再び物理攻撃できるように0にする。
		enemyzannzoulockframe1 = 0;
		stayhere = 0;//★敵が死んだ後にここで0になってしまうので、上でenemybyougablockが0の時のみ0になるようにした。
		//また敵1が死んだ後はstayhereが1になり初期位置に反応してしまうためenemybyougablockが必要。敵が一体だけならenemybyougablock
		//は必要ないが、二体いるため、一体が死んだあとにどっちかの敵が再び描画されないようにenemybyougablockは必要なのだ。
		enemyzannzoulock2 = 0;
		//byougajyunnbann = 0;

	}

}

void enemydamegegazou2() {
	
	//差分での奴は他の差分が0の時に他の攻撃で再び差分が上がるので攻撃を食らいながらも違う画像で攻撃になるのでこっちの書き方にした。
	if (enemyzannzoulockBframe > 0 && ++enemyzannzoulockBframe < 150) {//100くらいがちょうどいい、50だと
		//★敵の画像を一時的に消す。これでダメージを食らったっぽくなる。
		if (enemyzannzoulockBframe > 0 && enemyzannzoulockBframe < 5) {
			DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 0, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemy3damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockBframe > 10 && enemyzannzoulockBframe < 15) {
			DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 0, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemy3damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockBframe > 20 && enemyzannzoulockBframe < 25) {
			DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 0, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemy3damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockBframe > 30 && enemyzannzoulockBframe < 35) {
			DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 0, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemy3damegeHandle[0], TRUE);
		}
		if (enemyzannzoulockBframe > 40 && enemyzannzoulockBframe < 45) {
			DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 0, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemy3damegeHandle[0], TRUE);
			enemyzannzoulockBframe = 1;
		}
	}

	if (stayhere2frame > 0 && ++stayhere2frame > 150 && enemybyougablock2 == 0) {
		stayhere2frame = 0;
		stayhere2 = 0;
		ranndamulock2 = 0;//再び物理攻撃できるように0にする。
		enemyzannzoulockBframe = 0;
		anotherenemyzannzoulock = 0;
	}

}
