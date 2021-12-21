#define KEYS 67

static Key keys_en[KEYS] = {
    { "↹", 0, XK_Tab, 1 },
    { "Esc", 0, XK_Escape, 1 },
    { "←", 0, XK_Left, 1 },
    { "↓", 0, XK_Down, 1 },
    { "↑", 0, XK_Up, 1 },
    { "→", 0, XK_Right, 1 },
    { "-", 0, XK_minus, 1},
    { "=", 0, XK_equal, 1},
    { "[", 0, XK_bracketleft, 1 },
    { "]", 0, XK_bracketright, 1 },
    { "⨯", 0, XK_Break, 1},

    { 0 },

    { 0, 0, XK_1, 1 },
    { 0, 0, XK_2, 1 },
    { 0, 0, XK_3, 1 },
    { 0, 0, XK_4, 1 },
    { 0, 0, XK_5, 1 },
    { 0, 0, XK_6, 1 },
    { 0, 0, XK_7, 1 },
    { 0, 0, XK_8, 1 },
    { 0, 0, XK_9, 1 },
    { 0, 0, XK_0, 1 },
    { "`", 0, XK_grave, 1 },

    {0},

    { 0, 0, XK_q, 1 },
    { 0, 0, XK_w, 1 },
    { 0, 0, XK_e, 1 },
    { 0, 0, XK_r, 1 },
    { 0, 0, XK_t, 1 },
    { 0, 0, XK_y, 1 },
    { 0, 0, XK_u, 1 },
    { 0, 0, XK_i, 1 },
    { 0, 0, XK_o, 1 },
    { 0, 0, XK_p, 1 },
    { "\\", 0, XK_backslash, 1 },

    { 0 },

    { 0, 0, XK_a, 1 },
    { 0, 0, XK_s, 1 },
    { 0, 0, XK_d, 1 },
    { 0, 0, XK_f, 1 },
    { 0, 0, XK_g, 1 },
    { 0, 0, XK_h, 1 },
    { 0, 0, XK_j, 1 },
    { 0, 0, XK_k, 1 },
    { 0, 0, XK_l, 1 },
    { ";", 0, XK_colon, 1 },
    { "'", 0, XK_apostrophe, 1 },

    { 0 },

    { 0, 0, XK_z, 1 },
    { 0, 0, XK_x, 1 },
    { 0, 0, XK_c, 1 },
    { 0, 0, XK_v, 1 },
    { 0, 0, XK_b, 1 },
    { 0, 0, XK_n, 1 },
    { 0, 0, XK_m, 1 },
    { ",", 0, XK_comma, 1 },
    { ".", 0, XK_period, 1 },
    { "/", 0, XK_slash, 1 },
    { "⌫", 0, XK_BackSpace, 1 },

    { 0 },

    { "⇧", 0, XK_Shift_L, 1 },
    { "^", 0, XK_Control_L, 1 },
    { "_", 0, XK_Alt_L, 1 },
    { "", 0, XK_space, 4},
    { "123", 0, XK_Mode_switch, 1},
    { "#", 0, XK_Super_L, 1 },
    { "↲", 0, XK_Return, 1 },
};

static Key keys_num[KEYS] = {
    { "+", 0, XK_plus, 1, XK_Shift_L },
    { 0, 0, XK_1, 1 },
    { 0, 0, XK_2, 1 },
    { 0, 0, XK_3, 1 },
    { "(", 0, XK_parenleft, 1 },

    { 0 },

    { "-", 0, XK_minus, 1 },
    { 0, 0, XK_4, 1 },
    { 0, 0, XK_5, 1 },
    { 0, 0, XK_6, 1 },
    { ")", 0, XK_parenright, 1 },

    { 0 },

    { "*", 0, XK_asterisk, 1, XK_Shift_L },
    { 0, 0, XK_7, 1 },
    { 0, 0, XK_8, 1 },
    { 0, 0, XK_9, 1 },
    { "⌫", 0, XK_BackSpace, 1 },

    { 0 },

    { "/", 0, XK_slash, 1 },
    { "ABC", 0, XK_Mode_switch, 1 },
    { 0, 0, XK_0, 1 },
    { ".", 0, XK_period, 1 },
	{ "↲", 0, XK_Return, 1 },
};

# define OVERLAYS 0
static Key overlay[OVERLAYS] = {};

#define LAYERS 2

static Key *available_layers[LAYERS] = {
    keys_en,
    keys_num,
};

static char *layer_names[LAYERS] = {
    "en",
    "num",
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};
