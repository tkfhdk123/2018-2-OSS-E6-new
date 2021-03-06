#ifndef STATISTICS_H
#define STATISTICS_H

#include "global.hpp"
#include <fstream>

class Stats {

public:
  bool collectStatistics(int size);
  ull bestScore;
  ull totalMoveCount;
  int gameCount;
  double totalDuration;
  int winCount;
};

#endif
