void	Cloud_Hack_Purple(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFFFF0FFF);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Blue(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFFFF0111);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Yellow(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFF00FFFF);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Black(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFF000000);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Green(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFF268212);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Orange(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFF00A5FF);
	offset = 0;
	data = 0;
}

void	Cloud_Hack_Brown(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x380554, 0xFF007447);
	offset = 0;
	data = 0;
}

