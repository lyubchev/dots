const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1a1b", /* black   */
  [1] = "#764845", /* red     */
  [2] = "#827c71", /* green   */
  [3] = "#cb886c", /* yellow  */
  [4] = "#8ebd9e", /* blue    */
  [5] = "#9bd0af", /* magenta */
  [6] = "#e3b889", /* cyan    */
  [7] = "#c5c5c6", /* white   */

  /* 8 bright colors */
  [8]  = "#535354",  /* black   */
  [9]  = "#764845",  /* red     */
  [10] = "#827c71", /* green   */
  [11] = "#cb886c", /* yellow  */
  [12] = "#8ebd9e", /* blue    */
  [13] = "#9bd0af", /* magenta */
  [14] = "#e3b889", /* cyan    */
  [15] = "#c5c5c6", /* white   */

  /* special colors */
  [256] = "#1a1a1b", /* background */
  [257] = "#c5c5c6", /* foreground */
  [258] = "#c5c5c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
