// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string nonWindowsAsciiArt = 
      "\n                                                                                                                               \n"
	    "BBBBBBBBBBBBBBBBB   IIIIIIIIIITTTTTTTTTTTTTTTTTTTTTTTRRRRRRRRRRRRRRRRR   IIIIIIIIII               AAA               LLLLLLLLLLL\n"
        "B::::::::::::::::B  I::::::::IT:::::::::::::::::::::TR::::::::::::::::R  I::::::::I              A:::A              L:::::::::L\n"
        "B::::::BBBBBB:::::B I::::::::IT:::::::::::::::::::::TR::::::RRRRRR:::::R I::::::::I             A:::::A             L:::::::::L\n"
        "BB:::::B     B:::::BII::::::IIT:::::TT:::::::TT:::::TRR:::::R     R:::::RII::::::II            A:::::::A            LL:::::::LL\n"
        "  B::::B     B:::::B  I::::I  TTTTTT  T:::::T  TTTTTT  R::::R     R:::::R  I::::I             A:::::::::A             L:::::L\n"
        "  B::::B     B:::::B  I::::I          T:::::T          R::::R     R:::::R  I::::I            A:::::A:::::A            L:::::L\n"
        "  B::::BBBBBB:::::B   I::::I          T:::::T          R::::RRRRRR:::::R   I::::I           A:::::A A:::::A           L:::::L\n"
		"  B:::::::::::::BB    I::::I          T:::::T          R:::::::::::::RR    I::::I          A:::::A   A:::::A          L:::::L\n"               
        "  B::::BBBBBB:::::B   I::::I          T:::::T          R::::RRRRRR:::::R   I::::I         A:::::A     A:::::A         L:::::L\n"               
        "  B::::B     B:::::B  I::::I          T:::::T          R::::R     R:::::R  I::::I        A:::::AAAAAAAAA:::::A        L:::::L\n"               
        "  B::::B     B:::::B  I::::I          T:::::T          R::::R     R:::::R  I::::I       A:::::::::::::::::::::A       L:::::L\n"               
        "  B::::B     B:::::B  I::::I          T:::::T          R::::R     R:::::R  I::::I      A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL\n"
        "BB:::::BBBBBB::::::BII::::::II      TT:::::::TT      RR:::::R     R:::::RII::::::II   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::L\n"
        "B:::::::::::::::::B I::::::::I      T:::::::::T      R::::::R     R:::::RI::::::::I  A:::::A               A:::::A  L::::::::::::::::::::::L\n"
        "B::::::::::::::::B  I::::::::I      T:::::::::T      R::::::R     R:::::RI::::::::I A:::::A                 A:::::A L::::::::::::::::::::::L\n"
        "BBBBBBBBBBBBBBBBB   IIIIIIIIII      TTTTTTTTTTT      RRRRRRRR     RRRRRRRIIIIIIIIIIAAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLL\n";

const std::string nonWindowsAsciiArt = "\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
