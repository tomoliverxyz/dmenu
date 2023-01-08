/* dmenu location */
static int topbar = 1;

/* default font */
static const char *fonts[] = { "Hack Nerd Font Mono:size=12" };

/* default prompt */
static const char *prompt      = NULL;

/* theme */
static const char col_font[] = "#c5c8c6";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_font, "#1d1f21" },
	[SchemeSel] = { col_font,  "#a54242" },
	[SchemeOut] = { col_font,  "#8c9440" },
};

/* default line count */
static unsigned int lines      = 0;

/* white list deleting word characters */
static const char worddelimiters[] = " ";
