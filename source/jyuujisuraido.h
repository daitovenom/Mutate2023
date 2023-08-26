

#ifndef DEF_jyuujisuraido_H //二重include防止

#define DEF_jyuujisuraido_H




void jyuujisuraido() {

	if (nomalidou == 0) {

		//右コマンドの残像//原因はif (zannzou < 1) {zannzou = 0; zannzoulock = 0;}の部分でした。if (zannzou == 1) {zannzou = 0; zannzoulock = 0;}
		if (zannzou <= 30 && zannzou > 0) { //★残像を出すためにRキーでAを押したら変数zannzouが20になり、zannouの変数が0より大きいならば—1をしていき、その間だけ画像を描画する。
			--zannzou;
			//X軸のzannzouの分母を大きくすると減速する
			zannzoulock = 1;
			playerkonntororulock = 1;
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - 20 * zannzou / 5, pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);

			R1lock = 1;

			//ロックボタンが押せないようにこの期間はR1lock = 1;として。



			//移動中にR1を押すとzannzouの変数が1になりにバグが応じて主人公が消えてしまうことがある。
			//なので移動中はR1を押しても反応しないようにする。
		//	lockdekinai = 1;//R1が押せないように条件外の変数の値にする。
			//一様↑に書いたように移動中はlockdekinaiを1にしてR1を押しても敵の前に行かないにしても
			//ロックオンできないようにしたはずなのだが、なぜかロックオンマークがでてしまうので下のif (Pad[PAD_6] == 1)も付け足した。
			//移動中にR1を押してもロックマークが出ないようにするためのもの。
			//★★いやこれで正しいif (Pad[PAD_6] == 1 && playerY == enemyY&& enemyX== pre2enemyX&& lockdekinai == 0)
			//は相手が以前と同じマスにいた際にロックマークがつくとしたため、そして、新しく作った移動中でロックした場合は
			//書いていなかったため、下のif文を新しく書き加える必要があった。要は、zannzouが0の時のことを考えていなかったため自分が
			//消えるバグが起きたと言っていたがそれは違った。
			//もともと書いた長いif文とif (zannzou <= 30 && zannzou > 0)によりzannzouが0の時はlockdekinaiが1になるので
			//zannzouが0の時でも正しく動く。しかし、移動中にR1をした場合のことを書いていなかったため、
			//移動中にR1を押すと自分が消えるバグが起きてしまったのだ。なので下に新しくif文を追加したのだ。よってlockdekinai = 1;の意味はない。
			if (Pad[PAD_6] == 1) {
				//lockmark = 1;
				//lockonMove = 1;//アタックする時　ロックオンの画像が消えるように値を0にする。
				//zannzou = 0;//i★f (zannzou <= 30 && zannzou > 0)の条件を通って再び主人公が描画されるので、その条件を通過しないように
				//zannzou = 0と書いてしまうと主人公が敵の目の前に飛んだ後に消えてしまう。
				R1lock = 1;
				//enemyXは敵のX座標ではないので敵をR1で狙った後は正確な座標ではなく、
				//pos[enemyY][enemyX][0]やpos[enemyY][enemyX][1]に含まれる比喩の座標なので、目の前に敵がいなくても、ほかの場所に敵がいても
				//pos[2][3][0]のpos[2][3][0]のenemyXが同じ値であるため、値がそのままなので敵が目の前にいなくても
				//残ったままのenemyXの3の値により、その値を参考にしてしまい敵がいなくてもR1を押すと主人公が勝手に動いてしまう。
				//もともとのR1からのXボタンでのコンボの時はlockが1の時にlockが解除されるのでロックを掛けた瞬間の敵のマスしか参考にしないので
				//考えた通りに動く。
				//★ん？もともとの奴はif (Pad[PAD_6] == 1 && playerY == enemyY&& enemyX== pre2enemyX)
				//により敵のX座標はpre2enemyXによりわかり、Y座標はif文で判定しているため正しく動くのだろう。
				//↑にかいたif文によりlockが1になり、そのロックした瞬間の敵のX座標の値がpre2enemyXに入り、
				//playerX = enemyX - 1;により代入され、敵の前のマスが確保され、同じY座標の時のみにlockできるようにしたため
				//比喩だけでありながら正確な敵の目の前に現れるのだ。
				//ここでは敵の比喩の座標は使えないのでステージiとjをすべて個々の異なる変数にするのは大変なので
				//pos[enemyY][enemyX][0]== pos[0][0][0]&& pos[enemyY][enemyX][1] == pos[0][0][1]のように書く。
				//このやり方も大変だが変数を新しく増やすよりはマシ。
				//いや、比喩でも正確なものがあるのでenemyXとenemyYを扱って新しく作る。

				//こいつがなり立つときのif文に&&enemyY == playerYを加えないと、どのYの列でもR1を押せば主人公の座標に
				//
				//preplayerX = playerX; // 元の位置を保持
				//preplayerY = enemyY;
				//playerX = enemyX - 1; // 俺は敵の眼前へ//敵の位置から-1して自分がいるときの位置にいた場合。
				//addplayerX = pos[playerY][preplayerX][0]; //アドアタックタイム中で相手の目の前に移動した後のマスを保存するための変数
				//addplayerY = pos[playerY][preplayerX][1];
				//addattacktime = 180;
				//premasuframe;
				//殴る部分
				//++attackframe;
				//敵の目の前にいるが、左や右の入力が速いと相手の前にいくがロックマークが現れないバグが起こるので以下のように書いて置く。
				if (enemyY == playerY && playerX == enemyX - 1) {
					//zannzou = 50;
					lockmark = 1;
					lockonMove = 1;//何枚かのロックオンマークをフレームで描画してロックオンマークが動くようにするための変数。
					lock = 1;//ロックオンした際に左上にlockという文字を描画するための変数。
					sinnzoubyouga = 1;
					kougekilock = 1;
					//LEFTmark = 4545;

					if (Pad[PAD_6] == 1) {
						kougekiroclmark = 1;//R1を押しても前の座標を記憶しないように
					}



				}
			}
		}//移動した一瞬に元の位置に自分を描画したい、しかしうまく機能していない。
		///★多分一瞬過ぎるのであえてcount < 8と範囲を付けることでほんの一瞬だが残像が見えるようにした。
		///攻撃してcountが50に溜まるまでの期間を利用した。
		if (zannzou <= 25 && zannzou > 0) {
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - 14 * zannzou / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
		}
		if (zannzou <= 21 && zannzou > 0) {
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - 10 * zannzou / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
		}
		if (zannzou <= 18 && zannzou > 0) {
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - 6 * zannzou / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
		}
		if (zannzou <= 16 && zannzou > 0) {
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - 1 * zannzou / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
		}
		if (zannzou <= 6 && zannzou > 0) {
			DrawRotaGraph(pos[playerY][playerX][0] + 20 - zannzou / 20, pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
			zannzousaigo = 1;
		}
		//★移動中のフレームの0の部分でif (zannzou < 0)がif (zannzou <= 6 && zannzou > 0)の中にあったためジャスト0での定義があいまいで
		//移動中でのロックが描画されたり、バグで相手の目の前に行く際に消えていたのだろう。なのでジャスト0での定義をちゃんとするために
		//if (zannzou <= 30 && zannzou > 0)の時にzannzouが減るのではなく、if (zannzou <= 30 && --zannzou > 0)として
		//if文が終わった後もzannzouが減り、外に出したif (zannzou < 0)が反応するようにした。
		//★if (zannzou <= 30 && --zannzou > 0)と書くと左の値を最初に優先するので変数の定義では0なのでzannzouが30以下である。なので実行と同時に
		//変数の値は減らされる。右に書かれた --zannzou > 0の優先順位は低いため値は優先順位の高いzannzou <= 30により
		//引かれていき0より大きくはならない。
		//★ちなみにif (zannzou > 0&&--zannzou <= 15)と逆に描いた場合はzannzou > 0を優先するので0より大きく15より小さいならば引いていき
		//zannzouC > 0が優先されるためzannzouの値は0より小さくはならない。
		if (zannzousaigo == 1) {
			zannzoulock = 0;
			lockdekinai = 0;
			zannzousaigo = 0;
			zannzou = 0;
			R1lock = 0;
			playerkonntororulock = 0;
			Gunkirikae = 0;
			LEFTmark2 = 1;
		}

		//移動する際の前のマスに残像を残す(右移動の場合)
		//if (zannzou <= 30 && zannzou > 20) { 
			//DrawRotaGraph(pos[playerY][preplayerX][0], pos[playerY][playerX][1], 2.0, 0, playerImage, TRUE);

		//}
	}


	//左コマンドの残像
	if (zannzouA <= 30 && zannzouA > 0) { //★残像を出すためにRキーでAを押したら変数zannzouが20になり、zannouの変数が0より大きいならば?1をしていき、その間だけ画像を描画する。
		--zannzouA;
		//R1lock = 1;
		zannzoulock = 1;
		playerkonntororulock = 1;
		DrawRotaGraph(pos[playerY][playerX][0] + 20 + 18 * zannzouA / 20, pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);

		//移動中にR1を押すとzannzouの変数が1になりにバグが応じて主人公が消えてしまうことがある。
		//なので移動中はR1を押しても反応しないようにする。
		//lockdekinai = 1;//R1が押せないように条件外の変数の値にする。

	}//移動した一瞬に元の位置に自分を描画したい、しかしうまく機能していない。
	///★多分一瞬過ぎるのであえてcount < 8と範囲を付けることでほんの一瞬だが残像が見えるようにした。
	///攻撃してcountが50に溜まるまでの期間を利用した。
	if (zannzouA <= 25 && zannzouA > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 20 - 14 * zannzouA / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
	}
	if (zannzouA <= 21 && zannzouA > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 20 - 10 * zannzouA / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
	}
	if (zannzouA <= 18 && zannzouA > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 20 - 6 * zannzouA / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
	}
	if (zannzouA <= 16 && zannzouA > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 20 - 1 * zannzouA / (20), pos[playerY][playerX][1], bairituX, 0, playeridouAHandle[0], TRUE);
	}
	if (zannzouA <= 6 && zannzouA > 0) {
		//DrawRotaGraph(pos[playerY][playerX][0] + 20 - zannzouA / 20, pos[playerY][playerX][1], 5.0, 0, playeridouAHandle[0], TRUE);
		zannzouAsaigo = 1;
	}

	if (zannzouAsaigo == 1) {
		zannzoulock = 0;
		lockdekinai = 0;
		zannzouAsaigo = 0;
		zannzouA = 0;
		R1lock = 0;
		R1botannlock = 0;
		zannzoulock = 0;
		playerkonntororulock = 0;
		Gunkirikae = 0;
		LEFTmark2 = 2;
	}

	//★下と上のスライドコマンドは倍率は固定のままでいい。
	//下コマンドの残像
	//★最初の方は画像の倍率を2にして、後は通常と同じ5倍にして、若干画像を移動方向に少しずらし、かつX方向は下に移動する際は少し前に出る感じでずらしてステップを踏むように移動させた。上の場合は下バージョンの逆を行った。
	if (zannzouB <= 15 && zannzouB > 0) { //★残像を出すためにRキーでAを押したら変数zannzouが20になり、zannouの変数が0より大きいならば—1をしていき、その間だけ画像を描画する。
		--zannzouB;
		zannzoulock = 1;
		playerkonntororulock = 1;
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 3 * zannzouB / 2, pos[playerY][playerX][1] - 5 * zannzouB, 2.0, 0, playerGHandle[0], TRUE);
		//移動中にR1を押すとzannzouの変数が1になりにバグが応じて主人公が消えてしまうことがある。
		//なので移動中はR1を押しても反応しないようにする。
		lockdekinai = 1;//R1が押せないように条件外の変数の値にする。
		if (Pad[PAD_6] == 1) {
			lockmark = 0;//ロックマークを描画するための変数
			lockonMove = 0;//何枚かのロックオンマークをフレームで描画してロックオンマークが動くようにするための変数。
			lock = 0;//ロックオンした際に左上にlockという文字を描画するための変数。
		}
	}
	if (zannzouB <= 13 && zannzouB > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 3 * zannzouB / 2.5, pos[playerY][playerX][1] - 5 * zannzouB / 1.5, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouB <= 11 && zannzouB > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 3 * zannzouB / 3, pos[playerY][playerX][1] - 5 * zannzouB / 2, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouB <= 9 && zannzouB > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 3 * zannzouB / 3.5, pos[playerY][playerX][1] - 5 * zannzouB / 2.5, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouB <= 7 && zannzouB > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 3 * zannzouB / 4, pos[playerY][playerX][1] - 5 * zannzouB / 3, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouB <= 3 && zannzouB > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 + 2 * zannzouB / 4.5, pos[playerY][playerX][1] - 5 * zannzouB / 3.5, 5.0, 0, playerGHandle[0], TRUE);
		zannzouBsaigo = 1;
	}
	if (zannzouBsaigo == 1) {
		zannzoulock = 0;
		lockdekinai = 0;
		zannzouBsaigo = 0;
		zannzouB = 0;
		R1lock = 0;
		playerkonntororulock = 0;
		Gunkirikae = 0;
		LEFTmark2 = 3;
	}

	//上のコマンドの残像//このままでいい。
	if (zannzouC > 0 && zannzouC <= 15) { //★残像を出すためにRキーでAを押したら変数zannzouが20になり、zannouの変数が0より大きいならば—1をしていき、その間だけ画像を描画する。
		--zannzouC;
		zannzoulock = 1;
		playerkonntororulock = 1;
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 5, pos[playerY][playerX][1] - 1 * zannzouC / 4, 2.0, 0, playerGHandle[0], TRUE);
		//移動中にR1を押すとzannzouの変数が1になりにバグが応じて主人公が消えてしまうことがある。
		//なので移動中はR1を押しても反応しないようにする。
		lockdekinai = 1;//R1が押せないように条件外の変数の値にする。
		if (Pad[PAD_6] == 1) {
			lockmark = 0;//ロックマークを描画するための変数
			lockonMove = 0;//何枚かのロックオンマークをフレームで描画してロックオンマークが動くようにするための変数。
			lock = 0;//ロックオンした際に左上にlockという文字を描画するための変数。
		}
	}
	if (zannzouC <= 13 && zannzouC > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 2.5, pos[playerY][playerX][1] - 1 * zannzouC / 1.5, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouC <= 11 && zannzouC > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 3, pos[playerY][playerX][1] - 1 * zannzouC / 2, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouC <= 9 && zannzouC > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 3.5, pos[playerY][playerX][1] - 1 * zannzouC / 2.5, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouC <= 7 && zannzouC > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 4, pos[playerY][playerX][1] - 1 * zannzouC / 3, 5.0, 0, playerGHandle[0], TRUE);
	}
	if (zannzouC <= 3 && zannzouC > 0) {
		DrawRotaGraph(pos[playerY][playerX][0] + 30 - 3 * zannzouC / 4.5, pos[playerY][playerX][1] - 1 * zannzouC / 3.5, 2.0, 0, playerGHandle[0], TRUE);
		zannzouCsaigo = 1;
	}
	if (zannzouCsaigo == 1) {
		zannzoulock = 0;
		lockdekinai = 0;
		zannzouCsaigo = 0;
		zannzouC = 0;
		R1lock = 0;
		playerkonntororulock = 0;
		Gunkirikae = 0;
		LEFTmark2 = 4;
	}
	
}
#endif