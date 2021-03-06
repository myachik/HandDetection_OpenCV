//
//  ProcessHelper.cpp
//  HandDetectionOpenCV
//
//  Created by Vlad Mihaylenko on 24/03/15.
//  Copyright (c) 2015 Vlad Mihaylenko. All rights reserved.
//

#include "ProcessHelper.h"
#include <array>

std::vector<cv::Point> palm_controur  {
    cv::Point(118 ,62),
    cv::Point(122 ,64),
    cv::Point(125 ,66),
    cv::Point(126 ,70),
    cv::Point(127 ,74),
    cv::Point(127 ,78),
    cv::Point(128 ,82),
    cv::Point(128 ,86),
    cv::Point(128 ,90),
    cv::Point(128 ,94),
    cv::Point(128,102),
    cv::Point(127,106),
    cv::Point(128,110),
    cv::Point(128,114),
    cv::Point(127,118),
    cv::Point(126,122),
    cv::Point(125,126),
    cv::Point(127,130),
    cv::Point(130,128),
    cv::Point(131,124),
    cv::Point(133,116),
    cv::Point(133,112),
    cv::Point(133,108),
    cv::Point(133,104),
    cv::Point(134,100),
    cv::Point(134 ,96),
    cv::Point(134 ,92),
    cv::Point(135 ,88),
    cv::Point(135 ,84),
    cv::Point(137 ,80),
    cv::Point(144 ,76),
    cv::Point(147 ,78),
    cv::Point(150 ,82),
    cv::Point(153 ,85),
    cv::Point(154 ,89),
    cv::Point(155 ,93),
    cv::Point(155 ,97),
    cv::Point(155,101),
    cv::Point(154,105),
    cv::Point(154,109),
    cv::Point(153,117),
    cv::Point(153,121),
    cv::Point(153,125),
    cv::Point(152,129),
    cv::Point(151,133),
    cv::Point(149,136),
    cv::Point(148,140),
    cv::Point(148,144),
    cv::Point(147,148),
    cv::Point(146,152),
    cv::Point(147,160),
    cv::Point(147,164),
    cv::Point(146,168),
    cv::Point(146,172),
    cv::Point(147,176),
    cv::Point(147,180),
    cv::Point(149,184),
    cv::Point(152,187),
    cv::Point(156,185),
    cv::Point(159,181),
    cv::Point(166,173),
    cv::Point(169,169),
    cv::Point(173,165),
    cv::Point(177,161),
    cv::Point(180,159),
    cv::Point(184,157),
    cv::Point(188,156),
    cv::Point(192,155),
    cv::Point(195,159),
    cv::Point(196,163),
    cv::Point(194,171),
    cv::Point(192,175),
    cv::Point(189,178),
    cv::Point(187,182),
    cv::Point(184,186),
    cv::Point(181,190),
    cv::Point(179,194),
    cv::Point(176,198),
    cv::Point(173,202),
    cv::Point(171,206),
    cv::Point(168,214),
    cv::Point(165,217),
    cv::Point(162,220),
    cv::Point(158,223),
    cv::Point(154,227),
    cv::Point(151,230),
    cv::Point(148,233),
    cv::Point(144,233),
    cv::Point(141,235),
    cv::Point(137,237),
    cv::Point(129,239),
    cv::Point(125,240),
    cv::Point(121,240),
    cv::Point(117,240),
    cv::Point(113,240),
    cv::Point(109,240),
    cv::Point(105,240),
    cv::Point(101,240),
    cv::Point(97,240),
    cv::Point(93,240),
    cv::Point(85,235),
    cv::Point(81,233),
    cv::Point(77,230),
    cv::Point(74,228),
    cv::Point(72,224),
    cv::Point(70,220),
    cv::Point(68,216),
    cv::Point(66,212),
    cv::Point(65,208),
    cv::Point(66,204),
    cv::Point(65,196),
    cv::Point(64,192),
    cv::Point(64,188),
    cv::Point(64,184),
    cv::Point(64,180),
    cv::Point(63,176),
    cv::Point(63,172),
    cv::Point(63,168),
    cv::Point(63,164),
    cv::Point(62,160),
    cv::Point(60,152),
    cv::Point(59,148),
    cv::Point(58,144),
    cv::Point(57,140),
    cv::Point(56,136),
    cv::Point(55,132),
    cv::Point(54,128),
    cv::Point(54,124),
    cv::Point(53,120),
    cv::Point(54,116),
    cv::Point(55,108),
    cv::Point(56,104),
    cv::Point(56,100),
    cv::Point(58 ,97),
    cv::Point(62 ,94),
    cv::Point(66 ,95),
    cv::Point(68 ,99),
    cv::Point(70,103),
    cv::Point(72,107),
    cv::Point(72,111),
    cv::Point(73,119),
    cv::Point(72,123),
    cv::Point(74,126),
    cv::Point(75,130),
    cv::Point(76,134),
    cv::Point(78,138),
    cv::Point(82,138),
    cv::Point(82,134),
    cv::Point(82,130),
    cv::Point(82,126),
    cv::Point(82,118),
    cv::Point(82,114),
    cv::Point(82,110),
    cv::Point(82,106),
    cv::Point(82,102),
    cv::Point(82 ,98),
    cv::Point(82 ,94),
    cv::Point(83 ,90),
    cv::Point(84 ,86),
    cv::Point(84 ,82),
    cv::Point(85 ,74),
    cv::Point(87 ,70),
    cv::Point(90 ,68),
    cv::Point(94 ,67),
    cv::Point(98 ,68),
    cv::Point(99 ,72),
    cv::Point(100 ,76),
    cv::Point(101 ,80),
    cv::Point(101 ,84),
    cv::Point(102 ,88),
    cv::Point(101 ,96),
    cv::Point(102 ,100),
    cv::Point(101 ,104),
    cv::Point(102 ,108),
    cv::Point(101 ,112),
    cv::Point(101 ,116),
    cv::Point(101 ,120),
    cv::Point(101 ,124),
    cv::Point(101 ,128),
    cv::Point(101 ,132),
    cv::Point(104 ,138),
    cv::Point(106 ,135),
    cv::Point(106 ,131),
    cv::Point(106 ,127),
    cv::Point(106 ,123),
    cv::Point(106 ,119),
    cv::Point(106 ,115),
    cv::Point(106,111),
    cv::Point(108,107),
    cv::Point(108,103),
    cv::Point(107 ,99),
    cv::Point(108 ,95),
    cv::Point(108 ,91),
    cv::Point(108 ,87),
    cv::Point(108 ,83),
    cv::Point(108 ,79),
    cv::Point(108 ,75),
    cv::Point(108 ,71),
    cv::Point(109 ,68),
    cv::Point(112 ,64)
} ;
