int
width_ltsymbol(Bar *bar, BarArg *a)
{
	return TEXTW(bar->mon->ltsymbol);
}

int
draw_ltsymbol(Bar *bar, BarArg *a)
{
	return drw_text(drw, a->x, a->y, a->w, a->h, lrpad / 2, bar->mon->ltsymbol, 
#if INVERT_SELMON_LTSYMBOL
		bar->mon == selmon
#else
		0
#endif // INVERT_SELMON_LTSYMBOL
		, False);
}

int
click_ltsymbol(Bar *bar, Arg *arg, BarArg *a)
{
	return ClkLtSymbol;
}
