/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2016, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsitec.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

/**
 * \file object/object_type.h
 * \brief ObjectType enum
 */

#pragma once

#include <functional>

/**
 * \enum ObjectType
 * \brief Type of game object
 */
enum ObjectType
{
    OBJECT_NULL             = 0,
    OBJECT_PORTICO          = 2,    //!< Portico
    OBJECT_BASE             = 3,    //!< SpaceShip
    OBJECT_DERRICK          = 4,    //!< Derrick
    OBJECT_FACTORY          = 5,    //!< BotFactory
    OBJECT_STATION          = 6,    //!< PowerStation
    OBJECT_CONVERT          = 7,    //!< Converter
    OBJECT_REPAIR           = 8,    //!< RepairStation
    OBJECT_TOWER            = 9,    //!< DefenseTower
    OBJECT_NEST             = 10,   //!< AlienNest
    OBJECT_RESEARCH         = 11,   //!< ResearchCenter
    OBJECT_RADAR            = 12,   //!< RadarStation
    OBJECT_ENERGY           = 13,   //!< PowerPlant
    OBJECT_LABO             = 14,   //!< AutoLab
    OBJECT_NUCLEAR          = 15,   //!< NuclearPlant
    OBJECT_START            = 16,   //!< StartArea
    OBJECT_END              = 17,   //!< EndArea
    OBJECT_INFO             = 18,   //!< ExchangePost
    OBJECT_PARA             = 19,   //!< PowerCaptor
    OBJECT_TARGET1          = 20,   //!< Target1 (gate)
    OBJECT_TARGET2          = 21,   //!< Target2 (center)
    OBJECT_SAFE             = 22,   //!< Vault
    OBJECT_HUSTON           = 23,   //!< Houston
    OBJECT_DESTROYER        = 24,   //!< Destroyer
    OBJECT_STONE            = 31,   //!< TitaniumOre
    OBJECT_URANIUM          = 32,   //!< UraniumOre
    OBJECT_METAL            = 33,   //!< Titanium
    OBJECT_POWER            = 34,   //!< PowerCell
    OBJECT_ATOMIC           = 35,   //!< NuclearCell
    OBJECT_BULLET           = 36,   //!< OrgaMatter
    OBJECT_BBOX             = 37,   //!< BlackBox
    OBJECT_TNT              = 38,   //!< TNT
    OBJECT_MARKPOWER        = 50,   //!< PowerSpot
    OBJECT_MARKSTONE        = 51,   //!< TitaniumSpot
    OBJECT_MARKURANIUM      = 52,   //!< UraniumSpot
    OBJECT_MARKKEYa         = 53,   //!< KeyASpot
    OBJECT_MARKKEYb         = 54,   //!< KeyBSpot
    OBJECT_MARKKEYc         = 55,   //!< KeyCSpot
    OBJECT_MARKKEYd         = 56,   //!< KeyDSpot
    OBJECT_MINE             = 60,   //!< Mine
    OBJECT_WINFIRE          = 61,   //!< Firework
    OBJECT_SHOW             = 62,   //!< arrow above object (Visit)
    OBJECT_BAG              = 63,   //!< Bag
    OBJECT_PLANT0           = 70,   //!< Greenery0
    OBJECT_PLANT1           = 71,   //!< Greenery1
    OBJECT_PLANT2           = 72,   //!< Greenery2
    OBJECT_PLANT3           = 73,   //!< Greenery3
    OBJECT_PLANT4           = 74,   //!< Greenery4
    OBJECT_PLANT5           = 75,   //!< Greenery5
    OBJECT_PLANT6           = 76,   //!< Greenery6
    OBJECT_PLANT7           = 77,   //!< Greenery7
    OBJECT_PLANT8           = 78,   //!< Greenery8
    OBJECT_PLANT9           = 79,   //!< Greenery9
    OBJECT_PLANT10          = 80,   //!< Greenery10
    OBJECT_PLANT11          = 81,   //!< Greenery11
    OBJECT_PLANT12          = 82,   //!< Greenery12
    OBJECT_PLANT13          = 83,   //!< Greenery13
    OBJECT_PLANT14          = 84,   //!< Greenery14
    OBJECT_PLANT15          = 85,   //!< Greenery15
    OBJECT_PLANT16          = 86,   //!< Greenery16
    OBJECT_PLANT17          = 87,   //!< Greenery17
    OBJECT_PLANT18          = 88,   //!< Greenery18
    OBJECT_PLANT19          = 89,   //!< Greenery19
    OBJECT_TREE0            = 90,   //!< Tree0
    OBJECT_TREE1            = 91,   //!< Tree1
    OBJECT_TREE2            = 92,   //!< Tree2
    OBJECT_TREE3            = 93,   //!< Tree3
    OBJECT_TREE4            = 94,   //!< Tree4
    OBJECT_TREE5            = 95,   //!< Tree5
    OBJECT_MOBILEwt         = 100,  //!< PracticeBot
    OBJECT_MOBILEtt         = 101,  //!< track-trainer (unused)
    OBJECT_MOBILEft         = 102,  //!< fly-trainer (unused)
    OBJECT_MOBILEit         = 103,  //!< insect-trainer (unused)
    OBJECT_MOBILEwa         = 110,  //!< WheeledGrabber
    OBJECT_MOBILEta         = 111,  //!< TrackedGrabber
    OBJECT_MOBILEfa         = 112,  //!< WingedGrabber
    OBJECT_MOBILEia         = 113,  //!< LeggedGrabber
    OBJECT_MOBILEwc         = 120,  //!< WheeledShooter
    OBJECT_MOBILEtc         = 121,  //!< TrackedShooter
    OBJECT_MOBILEfc         = 122,  //!< WingedShooter
    OBJECT_MOBILEic         = 123,  //!< LeggedShooter
    OBJECT_MOBILEwi         = 130,  //!< WheeledOrgaShooter
    OBJECT_MOBILEti         = 131,  //!< TrackedOrgaShooter
    OBJECT_MOBILEfi         = 132,  //!< WingedOrgaShooter
    OBJECT_MOBILEii         = 133,  //!< LeggedOrgaShooter
    OBJECT_MOBILEws         = 140,  //!< WheeledSniffer
    OBJECT_MOBILEts         = 141,  //!< TrackedSniffer
    OBJECT_MOBILEfs         = 142,  //!< WingedSniffer
    OBJECT_MOBILEis         = 143,  //!< LeggedSniffer
    OBJECT_MOBILErt         = 200,  //!< Thumper
    OBJECT_MOBILErc         = 201,  //!< PhazerShooter
    OBJECT_MOBILErr         = 202,  //!< Recycler
    OBJECT_MOBILErs         = 203,  //!< Shielder
    OBJECT_MOBILEsa         = 210,  //!< Subber
    OBJECT_MOBILEtg         = 211,  //!< TargetBot
    OBJECT_MOBILEdr         = 212,  //!< Scribbler
    OBJECT_CONTROLLER       = 213,  //!< MissionController
    OBJECT_WAYPOINT         = 250,  //!< WayPoint
    OBJECT_FLAGb            = 260,  //!< BlueFlag
    OBJECT_FLAGr            = 261,  //!< RedFlag
    OBJECT_FLAGg            = 262,  //!< GreenFlag
    OBJECT_FLAGy            = 263,  //!< YellowFlag
    OBJECT_FLAGv            = 264,  //!< VioletFlag
    OBJECT_KEYa             = 270,  //!< KeyA
    OBJECT_KEYb             = 271,  //!< KeyB
    OBJECT_KEYc             = 272,  //!< KeyC
    OBJECT_KEYd             = 273,  //!< KeyD
    OBJECT_HUMAN            = 300,  //!< Me
    OBJECT_TOTO             = 301,  //!< Robby (toto)
    OBJECT_TECH             = 302,  //!< Tech
    OBJECT_BARRIER0         = 400,  //!< Barrier0
    OBJECT_BARRIER1         = 401,  //!< Barrier1
    OBJECT_BARRIER2         = 402,  //!< Barrier2
    OBJECT_BARRIER3         = 403,  //!< Barrier3
    OBJECT_BARRICADE0       = 410,  //!< Barricade0
    OBJECT_BARRICADE1       = 411,  //!< Barricade1
    OBJECT_MOTHER           = 500,  //!< AlienQueen
    OBJECT_EGG              = 501,  //!< AlienEgg
    OBJECT_ANT              = 502,  //!< AlienAnt
    OBJECT_SPIDER           = 503,  //!< AlienSpider
    OBJECT_BEE              = 504,  //!< AlienWasp
    OBJECT_WORM             = 505,  //!< AlienWorm
    OBJECT_RUINmobilew1     = 600,  //!< WreckBotw1
    OBJECT_RUINmobilew2     = 601,  //!< WreckBotw2
    OBJECT_RUINmobilet1     = 602,  //!< WreckBott1
    OBJECT_RUINmobilet2     = 603,  //!< WreckBott2
    OBJECT_RUINmobiler1     = 604,  //!< WreckBotr1
    OBJECT_RUINmobiler2     = 605,  //!< WreckBotr2
    OBJECT_RUINfactory      = 606,  //!< RuinBotFactory
    OBJECT_RUINdoor         = 607,  //!< RuinDoor
    OBJECT_RUINsupport      = 608,  //!< RuinSupport
    OBJECT_RUINradar        = 609,  //!< RuinRadar
    OBJECT_RUINconvert      = 610,  //!< RuinConvert
    OBJECT_RUINbase         = 611,  //!< RuinBaseCamp
    OBJECT_RUINhead         = 612,  //!< RuinHeadCamp
    OBJECT_TEEN0            = 620,  //!< Teen0
    OBJECT_TEEN1            = 621,  //!< Teen1
    OBJECT_TEEN2            = 622,  //!< Teen2
    OBJECT_TEEN3            = 623,  //!< Teen3
    OBJECT_TEEN4            = 624,  //!< Teen4
    OBJECT_TEEN5            = 625,  //!< Teen5
    OBJECT_TEEN6            = 626,  //!< Teen6
    OBJECT_TEEN7            = 627,  //!< Teen7
    OBJECT_TEEN8            = 628,  //!< Teen8
    OBJECT_TEEN9            = 629,  //!< Teen9
    OBJECT_TEEN10           = 630,  //!< Teen10
    OBJECT_TEEN11           = 631,  //!< Teen11
    OBJECT_TEEN12           = 632,  //!< Teen12
    OBJECT_TEEN13           = 633,  //!< Teen13
    OBJECT_TEEN14           = 634,  //!< Teen14
    OBJECT_TEEN15           = 635,  //!< Teen15
    OBJECT_TEEN16           = 636,  //!< Teen16
    OBJECT_TEEN17           = 637,  //!< Teen17
    OBJECT_TEEN18           = 638,  //!< Teen18
    OBJECT_TEEN19           = 639,  //!< Teen19
    OBJECT_TEEN20           = 640,  //!< Teen20
    OBJECT_TEEN21           = 641,  //!< Teen21
    OBJECT_TEEN22           = 642,  //!< Teen22
    OBJECT_TEEN23           = 643,  //!< Teen23
    OBJECT_TEEN24           = 644,  //!< Teen24
    OBJECT_TEEN25           = 645,  //!< Teen25
    OBJECT_TEEN26           = 646,  //!< Teen26
    OBJECT_TEEN27           = 647,  //!< Teen27
    OBJECT_TEEN28           = 648,  //!< Teen28
    OBJECT_TEEN29           = 649,  //!< Teen29
    OBJECT_TEEN30           = 650,  //!< Teen30
    OBJECT_TEEN31           = 651,  //!< Teen31
    OBJECT_TEEN32           = 652,  //!< Teen32
    OBJECT_TEEN33           = 653,  //!< Teen33
    OBJECT_TEEN34           = 654,  //!< Stone (Teen34)
    OBJECT_TEEN35           = 655,  //!< Teen35
    OBJECT_TEEN36           = 656,  //!< Teen36
    OBJECT_TEEN37           = 657,  //!< Teen37
    OBJECT_TEEN38           = 658,  //!< Teen38
    OBJECT_TEEN39           = 659,  //!< Teen39
    OBJECT_TEEN40           = 660,  //!< Teen40
    OBJECT_TEEN41           = 661,  //!< Teen41
    OBJECT_TEEN42           = 662,  //!< Teen42
    OBJECT_TEEN43           = 663,  //!< Teen43
    OBJECT_TEEN44           = 664,  //!< Teen44
    OBJECT_QUARTZ0          = 700,  //!< Quartz0
    OBJECT_QUARTZ1          = 701,  //!< Quartz1
    OBJECT_QUARTZ2          = 702,  //!< Quartz2
    OBJECT_QUARTZ3          = 703,  //!< Quartz3
    OBJECT_ROOT0            = 710,  //!< MegaStalk0
    OBJECT_ROOT1            = 711,  //!< MegaStalk1
    OBJECT_ROOT2            = 712,  //!< MegaStalk2
    OBJECT_ROOT3            = 713,  //!< MegaStalk3
    OBJECT_ROOT4            = 714,  //!< MegaStalk4
    OBJECT_ROOT5            = 715,  //!< MegaStalk5
    OBJECT_MUSHROOM1        = 731,  //!< Mushroom1
    OBJECT_MUSHROOM2        = 732,  //!< Mushroom2
    OBJECT_APOLLO1          = 900,  //!< ApolloLEM
    OBJECT_APOLLO2          = 901,  //!< ApolloJeep
    OBJECT_APOLLO3          = 902,  //!< ApolloFlag
    OBJECT_APOLLO4          = 903,  //!< ApolloModule
    OBJECT_APOLLO5          = 904,  //!< ApolloAntenna
    OBJECT_HOME1            = 910,  //!< Home


    // BuzzingCars specific
//    OBJECT_NULL         = 1000,    // objet détruit
//    OBJECT_FIX          = 1001,    // décor fixe
    OBJECT_PIECE        = 1002,   // pièce de voiture
    OBJECT_FACTORY1     = 1010,   // usine fixe
    OBJECT_FACTORY2     = 1011,   // usine fixe
    OBJECT_FACTORY3     = 1012,   // usine fixe
    OBJECT_FACTORY4     = 1013,   // usine fixe
    OBJECT_FACTORY5     = 1014,   // usine fixe
    OBJECT_FACTORY6     = 1015,   // usine fixe
    OBJECT_FACTORY7     = 1016,   // usine fixe
    OBJECT_FACTORY8     = 1017,   // usine fixe
    OBJECT_FACTORY9     = 1018,   // usine fixe
    OBJECT_FACTORY10    = 1019,   // usine fixe
    OBJECT_FACTORY11    = 1020,   // usine fixe
    OBJECT_FACTORY12    = 1021,   // usine fixe
    OBJECT_FACTORY13    = 1022,   // usine fixe
    OBJECT_FACTORY14    = 1023,   // usine fixe
    OBJECT_FACTORY15    = 1024,   // usine fixe
    OBJECT_FACTORY16    = 1025,   // usine fixe
    OBJECT_FACTORY17    = 1026,   // usine fixe
    OBJECT_FACTORY18    = 1027,   // usine fixe
    OBJECT_FACTORY19    = 1028,   // usine fixe
    OBJECT_FACTORY20    = 1029,   // usine fixe
//    OBJECT_TOWER        = 1030,   // tour de défense
//    OBJECT_NUCLEAR      = 1031,   // centrale nucléaire
//    OBJECT_START        = 1032,   // départ
//    OBJECT_END          = 1033,   // arrivée
//    OBJECT_PARA         = 1034,   // paratonnerre
    OBJECT_SUPPORT      = 1035,   // présentoir
    OBJECT_DOCK         = 1036,   // portique
    OBJECT_REMOTE       = 1037,   // télécommande
    OBJECT_STAND        = 1038,   // tribune
    OBJECT_GENERATOR    = 1039,   // générateur
    OBJECT_DOOR1        = 1040,   // porte 1
    OBJECT_DOOR2        = 1041,   // porte 2
    OBJECT_DOOR3        = 1042,   // porte 3
    OBJECT_DOOR4        = 1043,   // porte 4
    OBJECT_DOOR5        = 1044,   // porte 5
    OBJECT_COMPUTER     = 1045,   // ordi
//    OBJECT_REPAIR       = 1046,   // center de réparation
    OBJECT_SWEET        = 1047,   // maisonette
    OBJECT_ROADSIGN1    = 1060,   // signal 1
    OBJECT_ROADSIGN2    = 1061,   // signal 2
    OBJECT_ROADSIGN3    = 1062,   // signal 3
    OBJECT_ROADSIGN4    = 1063,   // signal 4
    OBJECT_ROADSIGN5    = 1064,   // signal 5
    OBJECT_ROADSIGN6    = 1065,   // signal 6
    OBJECT_ROADSIGN7    = 1066,   // signal 7
    OBJECT_ROADSIGN8    = 1067,   // signal 8
    OBJECT_ROADSIGN9    = 1068,   // signal 9
    OBJECT_ROADSIGN10   = 1069,   // signal 10
    OBJECT_ROADSIGN11   = 1070,   // signal 11
    OBJECT_ROADSIGN12   = 1071,   // signal 12
    OBJECT_ROADSIGN13   = 1072,   // signal 13
    OBJECT_ROADSIGN14   = 1073,   // signal 14
    OBJECT_ROADSIGN15   = 1074,   // signal 15
    OBJECT_ROADSIGN16   = 1075,   // signal 16
    OBJECT_ROADSIGN17   = 1076,   // signal 17
    OBJECT_ROADSIGN18   = 1077,   // signal 18
    OBJECT_ROADSIGN19   = 1078,   // signal 19
    OBJECT_ROADSIGN20   = 1079,   // signal 20
    OBJECT_ROADSIGN21   = 1080,   // signal 21
    OBJECT_ROADSIGN22   = 1081,   // signal 22
    OBJECT_ROADSIGN23   = 1082,   // signal 23
    OBJECT_ROADSIGN24   = 1083,   // signal 24
    OBJECT_ROADSIGN25   = 1084,   // signal 25
    OBJECT_ROADSIGN26   = 1085,   // signal 26
    OBJECT_ROADSIGN27   = 1086,   // signal 27
    OBJECT_ROADSIGN28   = 1087,   // signal 28
    OBJECT_ROADSIGN29   = 1088,   // signal 29
    OBJECT_ROADSIGN30   = 1089,   // signal 30
    OBJECT_PUB11        = 1100,  // pub
    OBJECT_PUB12        = 1101,  // pub
    OBJECT_PUB13        = 1102,  // pub
    OBJECT_PUB14        = 1103,  // pub
    OBJECT_PUB21        = 1104,  // pub
    OBJECT_PUB22        = 1105,  // pub
    OBJECT_PUB23        = 1106,  // pub
    OBJECT_PUB24        = 1107,  // pub
    OBJECT_PUB31        = 1108,  // pub
    OBJECT_PUB32        = 1109,  // pub
    OBJECT_PUB33        = 1110,  // pub
    OBJECT_PUB34        = 1111,  // pub
    OBJECT_PUB41        = 1112,  // pub
    OBJECT_PUB42        = 1113,  // pub
    OBJECT_PUB43        = 1114,  // pub
    OBJECT_PUB44        = 1115,  // pub
    OBJECT_PUB51        = 1116,  // pub
    OBJECT_PUB52        = 1117,  // pub
    OBJECT_PUB53        = 1118,  // pub
    OBJECT_PUB54        = 1119,  // pub
    OBJECT_PUB61        = 1120,  // pub
    OBJECT_PUB62        = 1121,  // pub
    OBJECT_PUB63        = 1122,  // pub
    OBJECT_PUB64        = 1123,  // pub
    OBJECT_PUB71        = 1124,  // pub
    OBJECT_PUB72        = 1125,  // pub
    OBJECT_PUB73        = 1126,  // pub
    OBJECT_PUB74        = 1127,  // pub
    OBJECT_PUB81        = 1128,  // pub
    OBJECT_PUB82        = 1129,  // pub
    OBJECT_PUB83        = 1130,  // pub
    OBJECT_PUB84        = 1131,  // pub
    OBJECT_PUB91        = 1132,  // pub
    OBJECT_PUB92        = 1133,  // pub
    OBJECT_PUB93        = 1134,  // pub
    OBJECT_PUB94        = 1135,  // pub
    OBJECT_FRET         = 1150,  // transportable
//    OBJECT_STONE        = 1151,  // pierre
//    OBJECT_URANIUM      = 1152,  // uranium
//    OBJECT_METAL        = 1153,  // métal
    OBJECT_BARREL       = 1154,  // tonneau
    OBJECT_BARRELa      = 1155,  // tonneau radioactif
//    OBJECT_ATOMIC       = 1156,  // pile atomique
//    OBJECT_BULLET       = 1157,  // boulet
//    OBJECT_BBOX         = 1158,  // black-box
//    OBJECT_TNT          = 1159,  // caisse de TNT
//    OBJECT_MINE         = 1160,  // bombe fixe
    OBJECT_POLE         = 1161,  // poteau
    OBJECT_CONE         = 1162,  // cône
    OBJECT_AQUA         = 1163,  // aquarium
    OBJECT_PIPES        = 1164,  // tuyaux
    OBJECT_GRAVEL       = 1165,  // tas de gravier
    OBJECT_TUB          = 1166,  // bac de gravier
    OBJECT_FIRE         = 1170,  // lance d'incendie
    OBJECT_HELICO       = 1171,  // hélicoptère
    OBJECT_COMPASS      = 1172,  // boussole
    OBJECT_BLITZER      = 1173,  // électrocuteur
    OBJECT_HOOK         = 1174,  // crochet
    OBJECT_TOYS1        = 1180,  // jouet 1
    OBJECT_TOYS2        = 1181,  // jouet 2
    OBJECT_TOYS3        = 1182,  // jouet 3
    OBJECT_TOYS4        = 1183,  // jouet 4
    OBJECT_TOYS5        = 1184,  // jouet 5
    OBJECT_BOMB         = 1190,  // bombe transportable
//    OBJECT_WINFIRE      = 1191,  // feu d'artifice
//    OBJECT_SHOW         = 1192,  // montre un lieu
//    OBJECT_BAG          = 1193,  // sac de survie
    OBJECT_CROSS1       = 1195,  // croisement
    OBJECT_MARK         = 1196,  // cible pour bot2
    OBJECT_CROWN        = 1197,  // couronne
//    OBJECT_PLANT0       = 1200,  // plante 0
//    OBJECT_PLANT1       = 1201,  // plante 1
//    OBJECT_PLANT2       = 1202,  // plante 2
//    OBJECT_PLANT3       = 1203,  // plante 3
//    OBJECT_PLANT4       = 1204,  // plante 4
//    OBJECT_PLANT5       = 1205,  // plante 5
//    OBJECT_PLANT6       = 1206,  // plante 6
//    OBJECT_PLANT7       = 1207,  // plante 7
//    OBJECT_PLANT8       = 1208,  // plante 8
//    OBJECT_PLANT9       = 1209,  // plante 9
//    OBJECT_PLANT10      = 1210,  // plante 10
//    OBJECT_PLANT11      = 1211,  // plante 11
//    OBJECT_PLANT12      = 1212,  // plante 12
//    OBJECT_PLANT13      = 1213,  // plante 13
//    OBJECT_PLANT14      = 1214,  // plante 14
//    OBJECT_PLANT15      = 1215,  // plante 15
//    OBJECT_PLANT16      = 1216,  // plante 16
//    OBJECT_PLANT17      = 1217,  // plante 17
//    OBJECT_PLANT18      = 1218,  // plante 18
//    OBJECT_PLANT19      = 1219,  // plante 19
//    OBJECT_TREE0        = 1220,  // arbre 0
//    OBJECT_TREE1        = 1221,  // arbre 1
//    OBJECT_TREE2        = 1222,  // arbre 2
//    OBJECT_TREE3        = 1223,  // arbre 3
//    OBJECT_TREE4        = 1224,  // arbre 4
//    OBJECT_TREE5        = 1225,  // arbre 5
    OBJECT_TREE6        = 1226,  // arbre 6
    OBJECT_TREE7        = 1227,  // arbre 7
    OBJECT_TREE8        = 1228,  // arbre 8
    OBJECT_TREE9        = 1229,  // arbre 9
    OBJECT_CAR          = 1250,  // voiture
//    OBJECT_MOBILEtg     = 1300,  // cible d'exercice
    OBJECT_MOBILEfb     = 1301,  // fireball
    OBJECT_MOBILEob     = 1302,  // orgaball
    OBJECT_TRAX         = 1303,  // trax
    OBJECT_TRAXf        = 1304,  // trax fixe
    OBJECT_UFO          = 1305,  // ufo
    OBJECT_BOT1         = 1320,  // robot 1
    OBJECT_BOT2         = 1321,  // robot 2
    OBJECT_BOT3         = 1322,  // robot 3
    OBJECT_BOT4         = 1323,  // robot 4
    OBJECT_BOT5         = 1324,  // robot 5
    OBJECT_EVIL1        = 1330,  // méchant 1
    OBJECT_EVIL2        = 1331,  // méchant 2
    OBJECT_EVIL3        = 1332,  // méchant 3
    OBJECT_EVIL4        = 1333,  // méchant 4
    OBJECT_EVIL5        = 1334,  // méchant 5
    OBJECT_CARROT       = 1340,  // carotte à suivre
    OBJECT_STARTER      = 1341,  // starter
    OBJECT_WALKER       = 1342,  // marcheur
    OBJECT_CRAZY        = 1343,  // fou
    OBJECT_GUIDE        = 1344,  // guide
//    OBJECT_WAYPOINT     = 1350,  // chemin
    OBJECT_TRAJECT      = 1351,  // trajectoire
    OBJECT_TARGET       = 1352,  // cible
//    OBJECT_FLAGb        = 1360,  // drapeau bleu
//    OBJECT_FLAGr        = 1361,  // drapeau rouge
//    OBJECT_FLAGg        = 1362,  // drapeau vert
//    OBJECT_FLAGy        = 1363,  // drapeau jaune
//    OBJECT_FLAGv        = 1364,  // drapeau violet
//    OBJECT_KEYa         = 1370,  // clé a
//    OBJECT_KEYb         = 1371,  // clé b
//    OBJECT_KEYc         = 1372,  // clé c
//    OBJECT_KEYd         = 1373,  // clé d
//    OBJECT_HUMAN        = 1400,  // homme
//    OBJECT_TECH         = 1402,  // technicien
//    OBJECT_BARRIER0     = 1500,  // barrière
//    OBJECT_BARRIER1     = 1501,  // barrière
//    OBJECT_BARRIER2     = 1502,  // barrière
//    OBJECT_BARRIER3     = 1503,  // barrière
    OBJECT_BARRIER4     = 1504,  // barrière
    OBJECT_BARRIER5     = 1505,  // barrière
    OBJECT_BARRIER6     = 1506,  // barrière
    OBJECT_BARRIER7     = 1507,  // barrière
    OBJECT_BARRIER8     = 1508,  // barrière
    OBJECT_BARRIER9     = 1509,  // barrière
    OBJECT_BARRIER10    = 1510,  // barrière
    OBJECT_BARRIER11    = 1511,  // barrière
    OBJECT_BARRIER12    = 1512,  // barrière
    OBJECT_BARRIER13    = 1513,  // barrière
    OBJECT_BARRIER14    = 1514,  // barrière
    OBJECT_BARRIER15    = 1515,  // barrière
    OBJECT_BARRIER16    = 1516,  // barrière
    OBJECT_BARRIER17    = 1517,  // barrière
    OBJECT_BARRIER18    = 1518,  // barrière
    OBJECT_BARRIER19    = 1519,  // barrière
    OBJECT_BOX1         = 1520,  // caisse
    OBJECT_BOX2         = 1521,  // caisse
    OBJECT_BOX3         = 1522,  // caisse
    OBJECT_BOX4         = 1523,  // caisse
    OBJECT_BOX5         = 1524,  // caisse
    OBJECT_BOX6         = 1525,  // caisse
    OBJECT_BOX7         = 1526,  // caisse
    OBJECT_BOX8         = 1527,  // caisse
    OBJECT_BOX9         = 1528,  // caisse
    OBJECT_BOX10        = 1529,  // caisse
    OBJECT_STONE1       = 1530,  // pierre
    OBJECT_STONE2       = 1531,  // pierre
    OBJECT_STONE3       = 1532,  // pierre
    OBJECT_STONE4       = 1533,  // pierre
    OBJECT_STONE5       = 1534,  // pierre
    OBJECT_STONE6       = 1535,  // pierre
    OBJECT_STONE7       = 1536,  // pierre
    OBJECT_STONE8       = 1537,  // pierre
    OBJECT_STONE9       = 1538,  // pierre
    OBJECT_STONE10      = 1539,  // pierre
    OBJECT_PIECE0       = 1540,  // pièce
    OBJECT_PIECE1       = 1541,  // pièce
    OBJECT_PIECE2       = 1542,  // pièce
    OBJECT_PIECE3       = 1543,  // pièce
    OBJECT_PIECE4       = 1544,  // pièce
    OBJECT_PIECE5       = 1545,  // pièce
    OBJECT_PIECE6       = 1546,  // pièce
    OBJECT_PIECE7       = 1547,  // pièce
    OBJECT_PIECE8       = 1548,  // pièce
    OBJECT_PIECE9       = 1549,  // pièce
//    OBJECT_RUINmobilew1 = 1700,  // ruine 1
//    OBJECT_RUINmobilew2 = 1701,  // ruine 1
//    OBJECT_RUINmobilet1 = 1702,  // ruine 2
//    OBJECT_RUINmobilet2 = 1703,  // ruine 2
//    OBJECT_RUINmobiler1 = 1704,  // ruine 3
//    OBJECT_RUINmobiler2 = 1705,  // ruine 3
//    OBJECT_RUINfactory  = 1706,  // ruine 4
//    OBJECT_RUINdoor     = 1707,  // ruine 5
//    OBJECT_RUINsupport  = 1708,  // ruine 6
//    OBJECT_RUINradar    = 1709,  // ruine 7
//    OBJECT_RUINconvert  = 1710,  // ruine 8
//    OBJECT_RUINbase     = 1711,  // ruine 9
//    OBJECT_RUINhead     = 1712,  // ruine 10
//    OBJECT_QUARTZ0      = 1800,  // quartz 0
//    OBJECT_QUARTZ1      = 1801,  // quartz 1
//    OBJECT_QUARTZ2      = 1802,  // quartz 2
//    OBJECT_QUARTZ3      = 1803,  // quartz 3
    OBJECT_QUARTZ4      = 1804,  // quartz 4
    OBJECT_QUARTZ5      = 1805,  // quartz 5
    OBJECT_QUARTZ6      = 1806,  // quartz 6
    OBJECT_QUARTZ7      = 1807,  // quartz 7
    OBJECT_QUARTZ8      = 1808,  // quartz 8
    OBJECT_QUARTZ9      = 1809,  // quartz 9
//    OBJECT_ROOT0        = 1810,  // racine 0
//    OBJECT_ROOT1        = 1811,  // racine 1
//    OBJECT_ROOT2        = 1812,  // racine 2
//    OBJECT_ROOT3        = 1813,  // racine 3
//    OBJECT_ROOT4        = 1814,  // racine 4
//    OBJECT_ROOT5        = 1815,  // racine 5
    OBJECT_ROOT6        = 1816,  // racine 6
    OBJECT_ROOT7        = 1817,  // racine 7
    OBJECT_ROOT8        = 1818,  // racine 8
    OBJECT_ROOT9        = 1819,  // racine 9
    OBJECT_SEAWEED0     = 1820,  // algue 0
    OBJECT_SEAWEED1     = 1821,  // algue 1
    OBJECT_SEAWEED2     = 1822,  // algue 2
    OBJECT_SEAWEED3     = 1823,  // algue 3
    OBJECT_SEAWEED4     = 1824,  // algue 4
    OBJECT_SEAWEED5     = 1825,  // algue 5
    OBJECT_SEAWEED6     = 1826,  // algue 6
    OBJECT_SEAWEED7     = 1827,  // algue 7
    OBJECT_SEAWEED8     = 1828,  // algue 8
    OBJECT_SEAWEED9     = 1829,  // algue 9
    OBJECT_MUSHROOM0    = 1830,  // champignon 0
//    OBJECT_MUSHROOM1    = 1831,  // champignon 1
//    OBJECT_MUSHROOM2    = 1832,  // champignon 2
    OBJECT_MUSHROOM3    = 1833,  // champignon 3
    OBJECT_MUSHROOM4    = 1834,  // champignon 4
    OBJECT_MUSHROOM5    = 1835,  // champignon 5
    OBJECT_MUSHROOM6    = 1836,  // champignon 6
    OBJECT_MUSHROOM7    = 1837,  // champignon 7
    OBJECT_MUSHROOM8    = 1838,  // champignon 8
    OBJECT_MUSHROOM9    = 1839,  // champignon 9
//    OBJECT_HOME1        = 1910,  // maison 1
    OBJECT_HOME2        = 1911,  // maison 2
    OBJECT_HOME3        = 1912,  // maison 3
    OBJECT_HOME4        = 1913,  // maison 4
    OBJECT_HOME5        = 1914,  // maison 5
    OBJECT_ALIEN1       = 1920,  // usine alien
    OBJECT_ALIEN2       = 1921,  // usine alien
    OBJECT_ALIEN3       = 1922,  // usine alien
    OBJECT_ALIEN4       = 1923,  // usine alien
    OBJECT_ALIEN5       = 1924,  // usine alien
    OBJECT_ALIEN6       = 1925,  // usine alien
    OBJECT_ALIEN7       = 1926,  // usine alien
    OBJECT_ALIEN8       = 1927,  // usine alien
    OBJECT_ALIEN9       = 1928,  // usine alien
    OBJECT_ALIEN10      = 1929,  // usine alien
    OBJECT_INCA1        = 1930,  // temple
    OBJECT_INCA2        = 1931,  // temple
    OBJECT_INCA3        = 1932,  // temple
    OBJECT_INCA4        = 1933,  // temple
    OBJECT_INCA5        = 1934,  // temple
    OBJECT_INCA6        = 1935,  // temple
    OBJECT_INCA7        = 1936,  // temple
    OBJECT_INCA8        = 1937,  // temple
    OBJECT_INCA9        = 1938,  // temple
    OBJECT_INCA10       = 1939,  // temple
    OBJECT_BUILDING1    = 1940,  // bâtiment
    OBJECT_BUILDING2    = 1941,  // bâtiment
    OBJECT_BUILDING3    = 1942,  // bâtiment
    OBJECT_BUILDING4    = 1943,  // bâtiment
    OBJECT_BUILDING5    = 1944,  // bâtiment
    OBJECT_BUILDING6    = 1945,  // bâtiment
    OBJECT_BUILDING7    = 1946,  // bâtiment
    OBJECT_BUILDING8    = 1947,  // bâtiment
    OBJECT_BUILDING9    = 1948,  // bâtiment
    OBJECT_BUILDING10   = 1949,  // bâtiment
    OBJECT_CARCASS1     = 1950,  // carcasse
    OBJECT_CARCASS2     = 1951,  // carcasse
    OBJECT_CARCASS3     = 1952,  // carcasse
    OBJECT_CARCASS4     = 1953,  // carcasse
    OBJECT_CARCASS5     = 1954,  // carcasse
    OBJECT_CARCASS6     = 1955,  // carcasse
    OBJECT_CARCASS7     = 1956,  // carcasse
    OBJECT_CARCASS8     = 1957,  // carcasse
    OBJECT_CARCASS9     = 1958,  // carcasse
    OBJECT_CARCASS10    = 1959,  // carcasse
    OBJECT_ORGA1        = 1960,  // organique
    OBJECT_ORGA2        = 1961,  // organique
    OBJECT_ORGA3        = 1962,  // organique
    OBJECT_ORGA4        = 1963,  // organique
    OBJECT_ORGA5        = 1964,  // organique
    OBJECT_ORGA6        = 1965,  // organique
    OBJECT_ORGA7        = 1966,  // organique
    OBJECT_ORGA8        = 1967,  // organique
    OBJECT_ORGA9        = 1968,  // organique
    OBJECT_ORGA10       = 1969,  // organique

    OBJECT_MAX              = 2000  //!< number of values
};

struct ObjectTypeHash
{
    inline std::size_t operator()(ObjectType t) const
    {
        return std::hash<int>()(t);
    }
};
