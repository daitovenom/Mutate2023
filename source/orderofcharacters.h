


#ifndef DEF_orderofcharacters_H //二重include防止

#define DEF_orderofcharacters_H


void orderofcharacters() {


	//パターン1、主＜敵1＜敵2
	if (pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 &&
		pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B)
	{
		LEFTmark = 111;
		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }


		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}

		//敵1を描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
			//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 8877;
		}

		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}

		enemydamegegazou1();

		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}


		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}

		enemydamegegazou2();
	}




	//2パターン。主＜敵2＜敵1
	else if (pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B &&
		pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 25)
	{
		LEFTmark = 3333;
		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }
		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}

		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ++ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}
		enemydamegegazou2();

		//敵1を描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
			//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			//LEFTmark = 4388;
		}



		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);
				
				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}

		enemydamegegazou1();
	}


	


	//パターン3、敵1＜主＜敵2
	else if (pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3
		&& pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B)
	{

		//敵1を描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
		//	//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 11011;
		}
		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);
			
				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}

		enemydamegegazou1();


		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }
	
		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}
		
		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}

		enemydamegegazou2();
	}



	//パターン4、敵1＜敵2＜主
	else if (pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B
		&& pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5)
	{

	LEFTmark = 99999;
		//敵1を描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
		//	//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			
		}

		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}

		enemydamegegazou1();

		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}

		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}

		enemydamegegazou2();
		KENJYUU();

		syuzinkoukougekigazou();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }

		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}
	}








	//パターン5　敵2＜主＜敵1
	else if (pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5
		&& pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 <= pos[enemyY1][enemyX1][1] + playerattackhanndou3) {
		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ++ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}

		enemydamegegazou2();

		LEFTmark = 9989898;

		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }

		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}

		//敵1の描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
			//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);

				//DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY2][enemyX2][1] + playerattackhanndou3, bairituY2, 0, enemyImage, TRUE);
			}
		}

		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}
		enemydamegegazou1();
	}



	//パターン6
	else if (pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 &&
		pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5)
	{

	LEFTmark = 65432;
		//もう一人の敵を描画
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
				//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
				//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。

			
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}

		//敵2の攻撃を描画
		if (ENEMYkougekigazouB1frame > 0 && ENEMYkougekigazouB1frame < 70) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiA1Handle[0], TRUE);
			}

		}
		if (ENEMYkougekigazouB2frame > 0 && ENEMYkougekigazouB2frame < 60) {

			if (anotherenemyzannzoulock == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B - 50, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, STAGE2ENEMY2kougekiB1Handle[0], TRUE);
			}
		}

		enemydamegegazou2();


		//敵1を描画
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//カウンターを食らった際に主人公がアナログパッドで初期位置に戻ると敵の残像が0になる。
		//	//そうするとカウンターを食らってる最中なのに敵の画像が描画されてしまう。なので、enemyhirumaseframe == 0を付け足した。
			//多分if (enemyzannzoulockframe > 25)で主人公の攻撃によって早くenemyzannzoulockが0になってしまうのだと思う。
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 711117;
		}
		//敵1の攻撃を描画
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//四角を描画
				}
			}

		}
		if (ENEMYkougekigazouA2frame > 0 && ENEMYkougekigazouA2frame < 70) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiA1Handle[0], TRUE);

			}

		}

		enemydamegegazou1();


		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }

		//ダメージを負った際の主人公の画像。
		if (playerMove4 > 0) {//下に書いているように60フレームないに納めないといけないため、50まで上がったところで終わっている。もともと60 * 4と書いた
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // 俺キャラの描画


		}
	}
}

#endif