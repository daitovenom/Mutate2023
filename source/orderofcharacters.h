


#ifndef DEF_orderofcharacters_H //��dinclude�h�~

#define DEF_orderofcharacters_H


void orderofcharacters() {


	//�p�^�[��1�A�偃�G1���G2
	if (pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 &&
		pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B)
	{
		LEFTmark = 111;
		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }


		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}

		//�G1��`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
			//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 8877;
		}

		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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

		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}


		//�G2�̍U����`��
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




	//2�p�^�[���B�偃�G2���G1
	else if (pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B &&
		pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 25)
	{
		LEFTmark = 3333;
		syuzinkoukougekigazou();
		KENJYUU();
		if (zannzoulock == 0 && migimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage, TRUE); }
		if (zannzoulock == 0 && hidarimuki == 1) { DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerImage2, TRUE); }
		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}

		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//�G2�̍U����`��
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

		//�G1��`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
			//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			//LEFTmark = 4388;
		}



		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);
				
				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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


	


	//�p�^�[��3�A�G1���偃�G2
	else if (pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3
		&& pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B)
	{

		//�G1��`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
		//	//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 11011;
		}
		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);
			
				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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
	
		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}
		
		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//�G2�̍U����`��
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



	//�p�^�[��4�A�G1���G2����
	else if (pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[enemyY2][enemyX2][1] + playerattackhanndou3B
		&& pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[playerY][playerX][1] + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5)
	{

	LEFTmark = 99999;
		//�G1��`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
		//	//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			
		}

		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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

		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}

		//�G2�̍U����`��
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

		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}
	}








	//�p�^�[��5�@�G2���偃�G1
	else if (pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5
		&& pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 <= pos[enemyY1][enemyX1][1] + playerattackhanndou3) {
		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

				//LEFTmark = 65432;
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}
		//�G2�̍U����`��
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

		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}

		//�G1�̕`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
			//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);

				//DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY2][enemyX2][1] + playerattackhanndou3, bairituY2, 0, enemyImage, TRUE);
			}
		}

		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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



	//�p�^�[��6
	else if (pos[enemyY2][enemyX2][1] + playerattackhanndou3B <= pos[enemyY1][enemyX1][1] + playerattackhanndou3 &&
		pos[enemyY1][enemyX1][1] + playerattackhanndou3 <= pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5)
	{

	LEFTmark = 65432;
		//������l�̓G��`��
		if (stayherelock2 == 0) {
			if (anotherenemyzannzoulock == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
				//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
				//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B

			
				DrawRotaGraph(pos[enemyY2][enemyX2][0] + playerattackhanndouB + playerattackhanndou2B + playerattackhanndou3B, pos[enemyY2][enemyX2][1] + playerattackhanndou3B - 30, bairituY2, 0, enemyImage3, TRUE);

			}
		}

		//�G2�̍U����`��
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


		//�G1��`��
		if (enemyzannzoulock2 == 0 && enemyhirumaseframe == 0) {//�J�E���^�[��H������ۂɎ�l�����A�i���O�p�b�h�ŏ����ʒu�ɖ߂�ƓG�̎c����0�ɂȂ�B
		//	//��������ƃJ�E���^�[��H����Ă�Œ��Ȃ̂ɓG�̉摜���`�悳��Ă��܂��B�Ȃ̂ŁAenemyhirumaseframe == 0��t���������B
			//����if (enemyzannzoulockframe > 25)�Ŏ�l���̍U���ɂ���đ���enemyzannzoulock��0�ɂȂ��Ă��܂��̂��Ǝv���B
			if (enemystayhere == 0) {
				//LEFTmark = 1234;
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, enemyImage2, TRUE);
			}
			LEFTmark = 711117;
		}
		//�G1�̍U����`��
		if (ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 60) {

			if (enemyzannzoulock2 == 1) {
				UEsuraido();
				DrawRotaGraph(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, bairituY, 0, STAGE2ENEMY1kougekiB1Handle[0], TRUE);

				if ((ENEMYkougekigazouA1frame > 0 && ENEMYkougekigazouA1frame < 10)
					||
					(ENEMYkougekigazouA1frame > 20 && ENEMYkougekigazouA1frame < 30)
					||
					(ENEMYkougekigazouA1frame > 40 && ENEMYkougekigazouA1frame < 50)) {

					DrawBox(pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 100, pos[enemyY1][enemyX1][1] + playerattackhanndou3 - 30, pos[enemyY1][enemyX1][0] + playerattackhanndou + playerattackhanndou2 + playerattackhanndou3 - 50, pos[enemyY1][enemyX1][1] + playerattackhanndou3 + 30, RED, TRUE);//�l�p��`��
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

		//�_���[�W�𕉂����ۂ̎�l���̉摜�B
		if (playerMove4 > 0) {//���ɏ����Ă���悤��60�t���[���Ȃ��ɔ[�߂Ȃ��Ƃ����Ȃ����߁A50�܂ŏオ�����Ƃ���ŏI����Ă���B���Ƃ���60 * 4�Ə�����
			DrawRotaGraph(pos[playerY][playerX][0] + 20 + nanameidouX + migiidou + nanameidouX2 + nanameidouX3 + nanameidouX4 + nanameidouX5 + yokeruX, pos[playerY][playerX][1] - 13 + nanameidouY + nanameidouY2 + nanameidouY3 + nanameidouY4 + nanameidouY5, bairituX, 0, playerdamegeGHandle[0], TRUE);  // ���L�����̕`��


		}
	}
}

#endif