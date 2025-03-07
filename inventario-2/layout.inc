
new PlayerText:Chamado_Draw[MAX_PLAYRS][11];

Chamado_Draw[playerid][0] = CreatePlayerTextDraw(playerid, 3.333353, 170.718399, "box");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][0], 0.000000, 3.181003);
PlayerTextDrawTextSize(playerid, Chamado_Draw[playerid][0], 106.000000, 0.000000);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][0], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][0], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][0], 1);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][0], 825769727);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][0], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][0], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][0], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][0], 1);

Chamado_Draw[playerid][1] = CreatePlayerTextDraw(playerid, 6.400022, 174.281402, "box");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][1], 0.000000, 0.424665);
PlayerTextDrawTextSize(playerid, Chamado_Draw[playerid][1], 15.850007, 0.000000);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][1], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][1], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][1], 1);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][1], -497666305);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][1], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][1], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][1], 2);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][1], 1);

format(string, sizeof(string), "#%02d", id);
Chamado_Draw[playerid][2] = CreatePlayerTextDraw(playerid, 6.466678, 173.362945, "teste");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][2], 0.138329, 0.650074);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][2], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][2], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][2], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][2], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][2], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][2], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][2], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][2], 1);

Chamado_Draw[playerid][3] = CreatePlayerTextDraw(playerid, 37.800006, 173.177734, "testeando");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][3], 0.136996, 0.654220);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][3], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][3], -1061109505);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][3], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][3], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][3], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][3], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][3], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][3], 1);

Chamado_Draw[playerid][4] = CreatePlayerTextDraw(playerid, 20.000011, 174.281402, "box");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][4], 0.000000, 0.424665);
PlayerTextDrawTextSize(playerid, Chamado_Draw[playerid][4], 34.279975, 0.000000);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][4], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][4], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][4], 1);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][4], 444006143);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][4], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][4], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][4], 2);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][4], 1);

Chamado_Draw[playerid][5] = CreatePlayerTextDraw(playerid, 27.099996, 172.962951, "Alerta");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][5], 0.138329, 0.650074);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][5], 2);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][5], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][5], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][5], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][5], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][5], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][5], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][5], 1);

Chamado_Draw[playerid][6] = CreatePlayerTextDraw(playerid, 104.933349, 193.600082, "../../....");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][6], 0.104330, 0.521480);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][6], 3);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][6], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][6], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][6], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][6], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][6], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][6], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][6], 1);

Chamado_Draw[playerid][7] = CreatePlayerTextDraw(playerid, 5.733318, 183.481338, "Em: ...");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][7], 0.140996, 0.625185);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][7], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][7], -2139062017);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][7], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][7], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][7], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][7], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][7], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][7], 1);

Chamado_Draw[playerid][8] = CreatePlayerTextDraw(playerid, 6.066652, 190.421966, "....");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][8], 0.135995, 0.654222);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][8], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][8], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][8], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][8], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][8], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][8], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][8], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][8], 1);

Chamado_Draw[playerid][9] = CreatePlayerTextDraw(playerid, 3.333353, 203.217361, "box");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][9], 0.000000, 0.486663);
PlayerTextDrawTextSize(playerid, Chamado_Draw[playerid][9], 106.000000, 0.000000);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][9], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][9], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][9], 1);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][9], 444006143);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][9], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][9], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][9], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][9], 1);

Chamado_Draw[playerid][10] = CreatePlayerTextDraw(playerid, 5.766661, 202.666259, "[!]_Use:_/Chamado 1");
PlayerTextDrawLetterSize(playerid, Chamado_Draw[playerid][10], 0.122331, 0.562960);
PlayerTextDrawAlignment(playerid, Chamado_Draw[playerid][10], 1);
PlayerTextDrawColor(playerid, Chamado_Draw[playerid][10], -1);
PlayerTextDrawUseBox(playerid, Chamado_Draw[playerid][10], 0);
PlayerTextDrawBoxColor(playerid, Chamado_Draw[playerid][10], 0);
PlayerTextDrawSetShadow(playerid, Chamado_Draw[playerid][10], 0);
PlayerTextDrawBackgroundColor(playerid, Chamado_Draw[playerid][10], 255);
PlayerTextDrawFont(playerid, Chamado_Draw[playerid][10], 1);
PlayerTextDrawSetProportional(playerid, Chamado_Draw[playerid][10], 1);