#include "fase2.h" 

void ataquePlayer(int* positionX, int* positionY, int positionPlayer, bool* atacando,int* limitAtaque) {
	switch (positionPlayer)
	{
	case 1:
		if (*limitAtaque < 10) {
			*positionY -= 2;
			*limitAtaque += 1;
		}
		else {
			*positionY += 20;
			*limitAtaque = 0;	
			*atacando = false;
		}
		break;
	case 2:
		positionX += 10;
		break;
	case 3: 
		if (*limitAtaque < 10) {
			*positionY += 2;
			*limitAtaque += 1;
		}else{
			if (positionX_espada1 + 20 >= 615 &&
				positionX_espada1 + 20 <= 665 &&
				positionY_espada1 + 91 >= 425 &&
				positionY_espada1 + 91<= 495 && controleJogador == true) {
				vidaRei -= 500;
			}
			*positionY -= 20;
			*limitAtaque = 0;
			*atacando = false;
		}
		break;
	case 4:
		positionX += 10;
		break;
	}
}

void fase2(ALLEGRO_EVENT evento) {
	
	al_draw_bitmap(background_f2, 0, 0, 0);

	//SOLDADOS DE BAIXO
	al_draw_bitmap(soldadosEsparta, 100, 600, 0);
	al_draw_bitmap(soldadosEsparta, 200, 600, 0);
	al_draw_bitmap(soldadosEsparta, 300, 600, 0);
	al_draw_bitmap(soldadosEsparta, 400, 600, 0);
	al_draw_bitmap(soldadosEsparta, 500, 600, 0);
	al_draw_bitmap(soldadosEsparta, 600, 600, 0);
	al_draw_bitmap(soldadosEsparta, 700, 600, 0);
	al_draw_bitmap(soldadosEsparta, 800, 600, 0);
	al_draw_bitmap(soldadosEsparta, 900, 600, 0);
	al_draw_bitmap(soldadosEsparta, 1000, 600, 0);
	al_draw_bitmap(soldadosEsparta, 1100, 600, 0);

	al_draw_bitmap(soldadosEsparta, 100, 550, 0);
	al_draw_bitmap(soldadosEsparta, 200, 550, 0);
	al_draw_bitmap(soldadosEsparta, 300, 550, 0);
	al_draw_bitmap(soldadosEsparta, 400, 550, 0);
	al_draw_bitmap(soldadosEsparta, 500, 550, 0);
	al_draw_bitmap(soldadosEsparta, 600, 550, 0);
	al_draw_bitmap(soldadosEsparta, 700, 550, 0);
	al_draw_bitmap(soldadosEsparta, 800, 550, 0);
	al_draw_bitmap(soldadosEsparta, 900, 550, 0);
	al_draw_bitmap(soldadosEsparta, 1000, 550, 0);
	al_draw_bitmap(soldadosEsparta, 1100, 550, 0);

	al_draw_bitmap(soldadosEsparta, 200, 500, 0);
	al_draw_bitmap(soldadosEsparta, 400, 500, 0);
	al_draw_bitmap(soldadosEsparta, 600, 500, 0);
	al_draw_bitmap(soldadosEsparta, 800, 500, 0);
	al_draw_bitmap(soldadosEsparta, 1000, 500, 0);

	//SOLDADOS DE CIMA
	al_draw_filled_rectangle(135, 100, 185, 170, al_map_rgba(0, 244, 244, 0.5));
	al_draw_filled_rectangle(295, 100, 345, 170, al_map_rgba(0, 244, 244, 0.5));
	al_draw_filled_rectangle(935, 100, 985, 170, al_map_rgba(0, 244, 244, 0.5));
	al_draw_filled_rectangle(1095, 100, 1145, 170, al_map_rgba(0, 244, 244, 0.5));

	//ESPADA REI
	al_draw_bitmap(espada_rei_f2, positionX_espadaR, positionY_espadaR, 0);
	
	//REI DE ESPARTA
	al_draw_filled_rectangle(615, 425, 665, 495, al_map_rgba(0, 244, 244, 0.5));
	
	switch (controleJogador)
	{
	case false:

		//BARRA DE VIDA PARIS
		switch (vidaJogador)
		{
		case 100:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 180, 6, ALLEGRO_ALIGN_CENTRE, "PARIS"); 
			al_draw_bitmap(barra_vida_cheia, 30, 30, 0);
			break;
		case 15:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 180, 6, ALLEGRO_ALIGN_CENTRE, "PARIS");
			al_draw_bitmap(barra_vida_baixa, 30, 30, 0);
			break;
		}

		//BARRA DE VIDA REI MENELAU
		switch (vidaRei)
		{
		case 1000:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 1120, 6, ALLEGRO_ALIGN_CENTRE, "REI MENELAU");
			al_draw_bitmap(barra_vidaRei_100, 937, 30, 0);
			break;
		}


		switch (vidaJogador)
		{

		case 100:
			//MOVIMENTAÇÃO DO PARIS VIDA 100%
			if (positionY1_f2 < 450 && positionY1_f2 > 150) {
				movimentarPlayer(evento, &positionX1_f2, &positionY1_f2); 
			}
			else {
				printf("Y-%d", positionY1_f2);
				switch (positionY1_f2)
				{
				case 451:
					printf("To aqui");
					if (evento.keyboard.keycode == ALLEGRO_KEY_UP) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					if (evento.keyboard.keycode == ALLEGRO_KEY_LEFT) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					if (evento.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					break;
				case 149:
					if (evento.keyboard.keycode == ALLEGRO_KEY_LEFT) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					if (evento.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					if (evento.keyboard.keycode == ALLEGRO_KEY_DOWN) {
						movimentarPlayer(evento, &positionX1_f2, &positionY1_f2);
					}
					break;
				}
			}
			//ATAQUE PARIS
			if (atacando == true) {
				ataquePlayer(&positionX_espada1, &positionY_espada1, 3, &atacando, &limiteAtaque);
			}
			break;

		case 15:
			if (positionX1_f2 < 615){
				positionX1_f2 += 1;
				positionX_espada1 += 1;
			}
			if (positionX1_f2 > 665) {
				positionX1_f2 -= 1;
				positionX_espada1 -= 1;
			}
			if (positionY1_f2 > 190) {
				positionY1_f2 -= 1;
				positionY_espada1 -= 1;
			}
			if (positionY1_f2 <= 190) {
				positionX_espada1 = 605;
				positionY_espada1 = 150;
				vidaJogador = 100;
				pressionado = 0;
				ultPressionado = 0;
				controleJogador = true;
			}
		}

		//PARIS - CONTROLANDO
		movimentoSprite(ParisBaixoNormal, ParisBaixoEsq, ParisBaixoDir, ParisEsqNormal, ParisEsqEsq, ParisEsqDir, ParisCimaNormal, ParisCimaEsq, ParisCimaDir, ParisDirNormal, ParisDirEsq, ParisDirDir, positionX1_f2, positionY1_f2);
		
		//HEITOR
		al_draw_filled_rectangle(positionX1_heitor, positionY1_heitor, positionX2_heitor, positionY2_heitor, al_map_rgba(0, 244, 244, 0.5));

		break;

	case true:


		//BARRA DE VIDA HEITOR
		switch (vidaJogador)
		{
		case 100:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 180, 6, ALLEGRO_ALIGN_CENTRE, "HEITOR");
			al_draw_bitmap(barra_vida_cheia, 30, 30, 0);
			break;
		}

		//BARRA DE VIDA REI MENELAU
		switch (vidaRei)
		{
		case 1000:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 1120, 6, ALLEGRO_ALIGN_CENTRE, "REI MENELAU");
			al_draw_bitmap(barra_vidaRei_100, 937, 30, 0);
			break;
		case 500:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 1120, 6, ALLEGRO_ALIGN_CENTRE, "REI MENELAU");
			al_draw_bitmap(barra_vidaRei_50, 937, 30, 0);
			break;
		case 0:
			al_draw_text(fonteMenu, al_map_rgb(255, 255, 255), 1120, 6, ALLEGRO_ALIGN_CENTRE, "REI MENELAU");
			al_draw_bitmap(barra_vida_baixa, 937, 30, 0);
			break;
		}

		if (vidaRei == 0) {
			navegacao += 1;
		}

		//EVENTO DE TECLA HEITOR
		movimentarPlayer(evento, positionX1_heitor, positionY1_heitor);

		//ATAQUE JOGADOR
		if (atacando == true) {
			ataquePlayer(&positionX_espada1, &positionY_espada1, 3, &atacando, &limiteAtaque);
		}

		//ESPADA HEITOR
		al_draw_bitmap(espada_player1, positionX_espada1, positionY_espada1, 0);

		//HEITOR - CONTROLANDO
		movimentoSprite(ParisBaixoNormal, ParisBaixoEsq, ParisBaixoDir, ParisEsqNormal, ParisEsqEsq, ParisEsqDir, ParisCimaNormal, ParisCimaEsq, ParisCimaDir, ParisDirNormal, ParisDirEsq, ParisDirDir, positionX1_f2, positionY1_f2);

		//PARIS
		al_draw_filled_rectangle(615, 20, 665, 90, al_map_rgba(0, 244, 244, 1));

		break;
	}

	al_flip_display();
}