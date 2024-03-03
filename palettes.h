#include <FastLED.h>

// Gradient palette "purplefly_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rc/tn/purplefly.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

// Basic but nice contrast
DEFINE_GRADIENT_PALETTE( purplefly_gp ) {
    0,   0,  0,  0,
   63, 239,  0,122,
  191, 252,255, 78,
  255,   0,  0,  0};

// Gradient palette "humidity_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ukmo/wow/tn/humidity.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 200 bytes of program space.

// Certified cool
DEFINE_GRADIENT_PALETTE( humidity_gp ) {
    0,   3,  0, 43,
   10,   3,  0, 43,
   10,   0,  0, 46,
   20,   0,  0, 46,
   20,   0,  7,105,
   30,   0,  7,105,
   30,   0,  0,255,
   40,   0,  0,255,
   40,   0, 53,255,
   51,   0, 53,255,
   51,   0,131,255,
   61,   0,131,255,
   61,   1,175, 55,
   71,   1,175, 55,
   71,   5,108, 34,
   81,   5,108, 34,
   81,   2,103,  2,
   91,   2,103,  2,
   91,   2,149,  2,
  102,   2,149,  2,
  102,   0,255,  4,
  112,   0,255,  4,
  112,  13,255,  0,
  122,  13,255,  0,
  122,  74,255,  0,
  132,  74,255,  0,
  132, 255,255,  0,
  142, 255,255,  0,
  142, 255,156,  0,
  153, 255,156,  0,
  153, 255, 81,  0,
  163, 255, 81,  0,
  163, 255, 33,  0,
  173, 255, 33,  0,
  173, 255, 22,  0,
  183, 255, 22,  0,
  183, 255,  0,  0,
  193, 255,  0,  0,
  193, 255,  0, 44,
  204, 255,  0, 44,
  204, 255,  3, 61,
  214, 255,  3, 61,
  214, 255, 28,102,
  224, 255, 28,102,
  224, 255, 61,128,
  234, 255, 61,128,
  234, 255,109,166,
  244, 255,109,166,
  244, 255,175,207,
  255, 255,175,207};

// Gradient palette "bhw1_01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 12 bytes of program space.

// Certified cool
DEFINE_GRADIENT_PALETTE( bhw1_01_gp ) {
    0, 227,101,  3,
  117, 194, 18, 19,
  255,  92,  8,192};


// Gradient palette "bhw1_28_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_28.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

// TOO BLUE
// DEFINE_GRADIENT_PALETTE( bhw1_28_gp ) {
//     0,  75,  1,221,
//    30, 252, 73,255,
//    48, 169,  0,242,
//   119,   0,149,242,
//   170,  43,  0,242,
//   206, 252, 73,255,
//   232,  78, 12,214,
//   255,   0,149,242};
  
// Gradient palette "bhw1_04_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_04.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_04_gp ) {
    0, 229,227,  1,
   15, 227,101,  3,
  142,  40,  1, 80,
  198,  17,  1, 79,
  255,   0,  0, 45};

// Gradient palette "Sunset_Real_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Sunset_Real.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( Sunset_Real_gp ) {
    0, 120,  0,  0,
   22, 179, 22,  0,
   51, 255,104,  0,
   85, 167, 22, 18,
  135, 100,  0,103,
  198,  16,  0,130,
  255,   0,  0,160};

// Gradient palette "scoutie_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rc/tn/scoutie.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( scoutie_gp ) {
    0, 255,156,  0,
  127,   0,195, 18,
  216,   1,  0, 39,
  255,   1,  0, 39};

// Gradient palette "bhw1_24_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_24.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_24_gp ) {
    0, 186,  5,135,
   30, 252, 73,255,
   61, 186,  5,135,
   89,  77,  1,103,
  124, 190, 67,221,
  163,  77,  1,103,
  186,  69, 54,214,
  219, 121,255,255,
  255,  69, 54,214};

// Gradient palette "es_pinksplash_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/pink_splash/tn/es_pinksplash_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_pinksplash_08_gp ) {
    0, 126, 11,255,
  127, 197,  1, 22,
  175, 210,157,172,
  221, 157,  3,112,
  255, 157,  3,112};

  // Gradient palette "Sunset_Wow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Sunset_Wow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( Sunset_Wow_gp ) {
    0, 109,  4, 24,
   25, 173, 25, 15,
   51, 255, 67,  8,
   76, 255, 87,  9,
  103, 255,111, 10,
  108, 184, 36, 14,
  112, 126,  3, 20,
  117, 179, 21, 14,
  123, 244, 55,  9,
  135, 249, 70,  8,
  152, 255, 86,  8,
  196, 192, 28, 12,
  255, 139,  2, 17};

  // Gradient palette "a_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds9/tn/a.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( a_gp ) {
    0,   0,  0,  0,
   31,   0, 55,  0,
   63,   0,255, 45,
  127, 255,  0,255,
  163, 255,  0, 45,
  196, 255,  0,  0,
  255, 255,255,  0};

// Gradient palette "bhw1_05_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_05.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 8 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_05_gp ) {
    0,   1,221, 53,
  255,  73,  3,178};

// Gradient palette "bhw2_turq_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_turq.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw2_turq_gp ) {
    0,   1, 33, 95,
   38,   1,107, 37,
   76,  42,255, 45,
  127, 255,255, 45,
  178,  42,255, 45,
  216,   1,107, 37,
  255,   1, 33, 95};

// Gradient palette "bhw3_32_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_32.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw3_32_gp ) {
    0, 234,231,  1,
   15, 171, 43,  6,
   40, 121,  0,  0,
   53,  95,  1, 29,
   71,  73,  1,168,
   94,  38, 63,221,
  109, 115, 51,221,
  127,  38, 63,221,
  147,  73,  1,168,
  181, 203, 28,  1,
  193, 155, 16, 11,
  216,  73,  1,168,
  255,   1,  4, 29};

// Gradient palette "bhw3_62_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_62.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw3_62_gp ) {
    0, 255,255, 45,
   43, 208, 93,  1,
  137, 224,  1,242,
  181, 159,  1, 29,
  255,  63,  4, 68};

// Gradient palette "bhw4_057_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw4/tn/bhw4_057.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw4_057_gp ) {
    0,   6,  0,  1,
   22,  17,  0,  1,
   58,  20,  1,  2,
   91,  75,  0, 12,
  127, 199,  1, 41,
  204,  17,  0,  1,
  255,   6,  0,  1};

// Gradient palette "saga_13_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/saga/tn/saga-13.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 80 bytes of program space.

DEFINE_GRADIENT_PALETTE( saga_13_gp ) {
    0,   0,255,  0,
   13,   1,227,  0,
   26,  10,201,  0,
   40,  31,176,  0,
   53,  66,154,  0,
   67, 120,135,  0,
   80, 140,115,  0,
   93, 165, 97,  0,
  107, 192, 81,  0,
  120, 222, 67,  0,
  134, 255, 55,  0,
  147, 237, 43,  0,
  161, 222, 33,  0,
  174, 206, 24,  0,
  187, 192, 17,  0,
  201, 179, 11,  0,
  214, 120,  7,  0,
  228,  74,  3,  0,
  241,  41,  1,  0,
  255,  19,  1,  0};

// Gradient palette "rave_grad_2_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/2/tn/rave-grad-2.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( rave_grad_2_gp ) {
    0, 169,191,  1,
   30, 249, 79, 24,
   61, 244, 28, 73,
   94, 153,  1,188,
  117,  50, 43,252,
  150,  19, 85,250,
  186,   1,209,149,
  224,  84,244, 17,
  255, 153,205,  1};

// Gradient palette "partytime_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/2/tn/partytime.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 56 bytes of program space.

DEFINE_GRADIENT_PALETTE( partytime_gp ) {
    0, 249, 21, 44,
   12, 237,  7, 69,
   33,  20, 33, 60,
   66, 237, 12, 11,
   84,   1, 79,122,
  101, 249, 47, 29,
  124,  45,  1,128,
  145, 244,  7,120,
  165,   1, 79,122,
  191, 249,  7, 52,
  211, 194, 85, 24,
  221,   1, 79,122,
  239, 237, 12, 11,
  255, 234, 12, 21};

  // Gradient palette "ofaurora_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/2/tn/ofaurora.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 124 bytes of program space.

DEFINE_GRADIENT_PALETTE( ofaurora_gp ) {
    0, 255,241,242,
   10, 237,  1,  9,
   15,  42,  1,  2,
   22,   1,  1,  1,
   35, 237,  1,  9,
   48, 255,241,242,
   58, 239, 57,  1,
   66,   1,  1,  1,
   76, 239, 57,  1,
   84, 255,241,242,
   94, 242,217,  1,
  101,   1,  1,  1,
  109, 242,217,  1,
  119, 255,241,242,
  127,   9,144, 36,
  132,   1,  1,  1,
  140,   9,144, 36,
  147, 255,241,242,
  158,   1,156,186,
  168,   1,  1,  1,
  178,   1,156,186,
  186, 255,241,242,
  198,  16, 13,255,
  206,   1,  1,  1,
  216,  16, 13,255,
  224, 255,241,242,
  234,  78,  1,156,
  237,  14,  1, 30,
  239,   1,  1,  1,
  244,  78,  1,156,
  255, 255,241,242};

  // Gradient palette "emerald_city_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/3/tn/emerald-city.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 128 bytes of program space.

DEFINE_GRADIENT_PALETTE( emerald_city_gp ) {
    0,   6, 74, 18,
   12,  10,166, 38,
   17,  97,233, 30,
   25,  17,237, 55,
   33,  10,166, 38,
   38,  97,233, 30,
   48,  59,239, 18,
   53,   6, 74, 18,
   63,  10,166, 38,
   71,   8, 30,  5,
   81,  97,233, 30,
   91,  12,180,  1,
   99,  97,233, 30,
  109,  12,180,  1,
  119,  10,166, 38,
  127,  17,237, 55,
  132,   8, 51, 16,
  140,  10,166, 38,
  145,   6, 74, 18,
  158,  59,239, 18,
  168,   1,221, 21,
  173,  10,166, 38,
  181,  15,104, 32,
  191,   6, 74, 18,
  201,  15,104, 32,
  211,  59,239, 18,
  219,   8, 51, 16,
  224,   1,135,  1,
  229,  10,166, 38,
  239,  59,239, 18,
  247,  10,166, 38,
  255,   6, 74, 18};

// Gradient palette "rootchakra_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/3/tn/rootchakra.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 60 bytes of program space.

DEFINE_GRADIENT_PALETTE( rootchakra_gp ) {
    0,   1,  1,  1,
   15,  51, 24,  6,
   33, 179, 13,  6,
   45, 120, 10, 18,
   66, 179, 13,  6,
   89, 120, 10, 18,
  107, 237,  3,  1,
  127, 237,  3,  1,
  142, 247, 13, 15,
  168, 179, 18,  6,
  191, 120, 10, 18,
  211, 237,  3,  1,
  229,  51, 24,  6,
  252,   1,  1,  1,
  255,   1,  1,  1};

// Gradient palette "tropical_beach_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/5/tn/tropical-beach.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 40 bytes of program space.

DEFINE_GRADIENT_PALETTE( tropical_beach_gp ) {
    0,   1, 61, 85,
   38,   9,176,255,
   63, 255, 97,  5,
   96, 255, 26, 19,
  130, 206,201,  6,
  165, 255, 29, 16,
  191, 255, 97,  5,
  221,   9,176,255,
  247,   1, 61, 85,
  255,   1, 61, 85};

// Gradient palette "somewhere2_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/5/tn/somewhere2.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 60 bytes of program space.

DEFINE_GRADIENT_PALETTE( somewhere2_gp ) {
    0,   9,176,255,
   15,  15,255,111,
   25,  54,255, 37,
   40,  34,255, 59,
   61, 173,209,  8,
   79, 255, 97,  5,
   96, 255, 26, 19,
  112, 255, 29, 16,
  132, 255, 12, 49,
  150, 255,  8,105,
  173, 179, 14,216,
  188, 112, 27,255,
  204,  57, 55,255,
  229,   5,255,219,
  255,   9,176,255};

// Gradient palette "zoyraya_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/5/tn/zoyraya.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( zoyraya_gp ) {
    0,   7,162,138,
   89,   1, 67,240,
  160, 115, 13,156,
  216, 244,  1, 43,
  255, 244,  1, 43};

// Gradient palette "crimsondreams_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/7/tn/crimsondreams.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 64 bytes of program space.

DEFINE_GRADIENT_PALETTE( crimsondreams_gp ) {
    0,  22,  1,  1,
   40, 101,  2,  1,
   53, 130,  6,  2,
   66, 101,  2,  1,
   81, 115,  5,  2,
   99,   9,  1,  1,
  109,  53,  1,  1,
  124,  92,  5,  1,
  140,  57,  1,  1,
  158,  92,  5,  1,
  170,   9,  1,  1,
  191, 109,  5,  2,
  204,  92,  5,  1,
  219,  58,  2,  1,
  237,  22,  1,  1,
  255,  22,  1,  1};


// Gradient palette "alarm_p2_0_7_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/dca/tn/alarm.p2.0.7.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 84 bytes of program space.

DEFINE_GRADIENT_PALETTE( alarm_p2_0_7_gp ) {
    0, 182,255,168,
   12, 171,255,103,
   25, 192,255, 72,
   38, 232,255, 50,
   51, 255,225, 34,
   63, 255,175, 22,
   76, 255,127, 14,
   89, 255, 85,  8,
  102, 255, 49,  4,
  114, 255, 22,  2,
  127, 255,  5,  1,
  140, 255,  1,  1,
  153, 255,  1, 21,
  165, 255,  1, 80,
  178, 255,  1,188,
  191, 169,  1,255,
  204,  69,  1,255,
  216,  19,  1,255,
  229,   1,  1,255,
  242,   1,  7,255,
  255,   1, 39,255};

CRGBPalette16 palettes[] = {
  RainbowColors_p,
  PartyColors_p,
  purplefly_gp,
  humidity_gp,
  bhw1_01_gp,
  bhw1_04_gp,
  Sunset_Real_gp,
  scoutie_gp,
  bhw1_24_gp,
  es_pinksplash_08_gp,
  Sunset_Wow_gp,
  a_gp,
  bhw1_05_gp,
  bhw2_turq_gp,
  bhw3_32_gp,
  bhw3_62_gp,
  bhw4_057_gp, // Starts black FYI
  saga_13_gp,
  rave_grad_2_gp,
  partytime_gp,
  ofaurora_gp,
  emerald_city_gp,
  rootchakra_gp,
  tropical_beach_gp,
  somewhere2_gp,
  zoyraya_gp,
  crimsondreams_gp,
  alarm_p2_0_7_gp,
};

CRGBPalette16 getRandomPalette() {
  int arraySize = sizeof(palettes) / sizeof(palettes[0]);
  return palettes[random8(arraySize)];
}
