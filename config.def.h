static const Bool wmborder = True;
static int fontsize = 22;
static double overlay_delay = 0.5; //in seconds
static double repeat_delay = 0.3; //in seconds, will not work on keys with overlays
static int scan_rate = 30; //scan rate in microseconds, affects key repetition rate
static int heightfactor = 15; //one row of keys takes up 1/x of the screen height
static int xspacing = 0;
static int yspacing = 0;
static const char *defaultfonts[] = {
	"DejaVu Sans:bold:size=22"
};
static const char *defaultcolors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#232323" },
	[SchemeNormShift] = { "#8a8a8a", "#232323" },
	[SchemeNormABC] = { "#bbbbbb", "#232323" },
	[SchemeNormABCShift] = { "#8a8a8a", "#232323" },
	[SchemePress] = { "#bbbbbb", "#606060" },
	[SchemePressShift] = { "#8a8a8a", "#606060" },
	[SchemeHighlight] = { "#bbbbbb", "#232323" },
	[SchemeHighlightShift] = { "#8a8a8a", "#232323" },
	[SchemeOverlay] = { "#bbbbbb", "#181818" },
	[SchemeOverlayShift] = { "#8a8a8a", "#181818" },
	[SchemeWindow] = { "#bbbbbb", "#232323" },
};

