/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1f1f1f",     /* after initialization */
	[INPUT] =  "#2b0800",   /* during input */
	[FAILED] = "#00052b",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
