#define event(d, t, i) {.desc = d, .picType = t, .picId = i}
static const struct SideQuestEvent sSideQuestEvents_1[] = {event(gText_SideQuestDesc_1_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_2[] = {event(gText_SideQuestDesc_2_1, PICTYPE_ITEM_ICON, ITEM_BIG_MUSHROOM),
                                                           event(gText_SideQuestDesc_2_2, PICTYPE_ITEM_ICON, ITEM_BIG_MALASADA)};
static const struct SideQuestEvent sSideQuestEvents_3[] = {event(gText_SideQuestDesc_3_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_4[] = {event(gText_SideQuestDesc_4_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_5[] = {event(gText_SideQuestDesc_5_1, PICTYPE_OBJECT_EVENT, OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN),
                                                           event(gText_SideQuestDesc_5_2, PICTYPE_OBJECT_EVENT, OBJ_EVENT_GFX_FAT_MAN),
                                                           event(gText_SideQuestDesc_5_3, PICTYPE_OBJECT_EVENT, OBJ_EVENT_GFX_EXPERT_F)};
static const struct SideQuestEvent sSideQuestEvents_6[] = {event(gText_SideQuestDesc_6_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_7[] = {event(gText_SideQuestDesc_7_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_8[] = {event(gText_SideQuestDesc_8_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_9[] = {event(gText_SideQuestDesc_9_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_10[] = {event(gText_SideQuestDesc_10_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_11[] = {event(gText_SideQuestDesc_11_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_12[] = {event(gText_SideQuestDesc_12_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_13[] = {event(gText_SideQuestDesc_13_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_14[] = {event(gText_SideQuestDesc_14_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_15[] = {event(gText_SideQuestDesc_15_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_16[] = {event(gText_SideQuestDesc_16_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_17[] = {event(gText_SideQuestDesc_17_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_18[] = {event(gText_SideQuestDesc_18_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_19[] = {event(gText_SideQuestDesc_19_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_20[] = {event(gText_SideQuestDesc_20_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_21[] = {event(gText_SideQuestDesc_21_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_22[] = {event(gText_SideQuestDesc_22_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_23[] = {event(gText_SideQuestDesc_23_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_24[] = {event(gText_SideQuestDesc_24_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_25[] = {event(gText_SideQuestDesc_25_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_26[] = {event(gText_SideQuestDesc_26_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_27[] = {event(gText_SideQuestDesc_27_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_28[] = {event(gText_SideQuestDesc_28_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_29[] = {event(gText_SideQuestDesc_29_1, PICTYPE_NONE, 0)};
static const struct SideQuestEvent sSideQuestEvents_30[] = {event(gText_SideQuestDesc_30_1, PICTYPE_NONE, 0)};

#define side_quest(n, e, p, m) {.name = n, .events = e, .poc = p, .map = m, .eventCount = ARRAY_COUNT(e)}
static const struct SideQuest sSideQuests[SIDE_QUEST_COUNT] =
{
    side_quest(gText_SideQuestName_1,  sSideQuestEvents_1,  gText_SideQuestPOC_1,  gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_2,  sSideQuestEvents_2,  gText_SideQuestPOC_2,  gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_3,  sSideQuestEvents_3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3),
    side_quest(gText_SideQuestName_4,  sSideQuestEvents_4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4),
    side_quest(gText_SideQuestName_5,  sSideQuestEvents_5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5),
    side_quest(gText_SideQuestName_6,  sSideQuestEvents_6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6),
    side_quest(gText_SideQuestName_7,  sSideQuestEvents_7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7),
    side_quest(gText_SideQuestName_8,  sSideQuestEvents_8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8),
    side_quest(gText_SideQuestName_9,  sSideQuestEvents_9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9),
    side_quest(gText_SideQuestName_10, sSideQuestEvents_10, gText_SideQuestPOC_10, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_11, sSideQuestEvents_11, gText_SideQuestPOC_11, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_12, sSideQuestEvents_12, gText_SideQuestPOC_12, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_13, sSideQuestEvents_13, gText_SideQuestPOC_13, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_14, sSideQuestEvents_14, gText_SideQuestPOC_14, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_15, sSideQuestEvents_15, gText_SideQuestPOC_15, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_16, sSideQuestEvents_16, gText_SideQuestPOC_16, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_17, sSideQuestEvents_17, gText_SideQuestPOC_17, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_18, sSideQuestEvents_18, gText_SideQuestPOC_18, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_19, sSideQuestEvents_19, gText_SideQuestPOC_19, gText_SideQuestMap_1),
    side_quest(gText_SideQuestName_20, sSideQuestEvents_20, gText_SideQuestPOC_20, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_21, sSideQuestEvents_21, gText_SideQuestPOC_21, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_22, sSideQuestEvents_22, gText_SideQuestPOC_22, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_23, sSideQuestEvents_23, gText_SideQuestPOC_23, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_24, sSideQuestEvents_24, gText_SideQuestPOC_24, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_25, sSideQuestEvents_25, gText_SideQuestPOC_25, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_26, sSideQuestEvents_26, gText_SideQuestPOC_26, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_27, sSideQuestEvents_27, gText_SideQuestPOC_27, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_28, sSideQuestEvents_28, gText_SideQuestPOC_28, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_29, sSideQuestEvents_29, gText_SideQuestPOC_29, gText_SideQuestMap_2),
    side_quest(gText_SideQuestName_30, sSideQuestEvents_30, gText_SideQuestPOC_30, gText_SideQuestMap_3),
};
