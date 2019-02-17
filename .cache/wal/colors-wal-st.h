const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090807", /* black   */
  [1] = "#635E5B", /* red     */
  [2] = "#6E6D6D", /* green   */
  [3] = "#9C6253", /* yellow  */
  [4] = "#BB9964", /* blue    */
  [5] = "#7A7F86", /* magenta */
  [6] = "#999A99", /* cyan    */
  [7] = "#e9dec9", /* white   */

  /* 8 bright colors */
  [8]  = "#a39b8c",  /* black   */
  [9]  = "#635E5B",  /* red     */
  [10] = "#6E6D6D", /* green   */
  [11] = "#9C6253", /* yellow  */
  [12] = "#BB9964", /* blue    */
  [13] = "#7A7F86", /* magenta */
  [14] = "#999A99", /* cyan    */
  [15] = "#e9dec9", /* white   */

  /* special colors */
  [256] = "#090807", /* background */
  [257] = "#e9dec9", /* foreground */
  [258] = "#e9dec9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
