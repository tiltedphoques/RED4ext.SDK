#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim { 
struct SermoTestController
{
    static constexpr const char* NAME = "animSermoTestController";
    static constexpr const char* ALIAS = NAME;

    float faceEnvelope; // 00
    float upperFace; // 04
    float lowerFace; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    float lipSyncEnvelope; // 10
    float lipSyncLeftEnvelope; // 14
    float lipSyncRightEnvelope; // 18
    float jaliJaw; // 1C
    float jaliLips; // 20
    float muzzleLips; // 24
    float muzzleEyes; // 28
    float muzzleBrows; // 2C
    float muzzleEyeDirections; // 30
    float eye_l_brows_raise_in; // 34
    float eye_r_brows_raise_in; // 38
    float eye_l_brows_raise_out; // 3C
    float eye_r_brows_raise_out; // 40
    float eye_l_brows_lower; // 44
    float eye_r_brows_lower; // 48
    float eye_l_brows_lateral; // 4C
    float eye_r_brows_lateral; // 50
    float eye_l_blink; // 54
    float eye_r_blink; // 58
    float eye_l_widen; // 5C
    float eye_r_widen; // 60
    float eye_l_oculi_squint_inner; // 64
    float eye_r_oculi_squint_inner; // 68
    float eye_l_oculi_squint_outer_lower; // 6C
    float eye_r_oculi_squint_outer_lower; // 70
    float eye_l_oculi_squint_outer_upper; // 74
    float eye_r_oculi_squint_outer_upper; // 78
    float nose_l_compress; // 7C
    float nose_r_compress; // 80
    float nose_l_breathe_in; // 84
    float nose_r_breathe_in; // 88
    float nose_l_breathe_out; // 8C
    float nose_r_breathe_out; // 90
    float nose_l_snear; // 94
    float nose_r_snear; // 98
    float lips_l_nasolabialDeepener; // 9C
    float lips_r_nasolabialDeepener; // A0
    float lips_l_upper_raise; // A4
    float lips_r_upper_raise; // A8
    float lips_l_pull; // AC
    float lips_r_pull; // B0
    float lips_l_corner_up; // B4
    float lips_r_corner_up; // B8
    float lips_l_corner_wide; // BC
    float lips_r_corner_wide; // C0
    float lips_l_corner_stretch; // C4
    float lips_r_corner_stretch; // C8
    float lips_l_stretch; // CC
    float lips_r_stretch; // D0
    float lips_l_corner_sharp_up; // D4
    float lips_r_corner_sharp_up; // D8
    float lips_suck_up; // DC
    float lips_suck_dn; // E0
    float lips_puff_up; // E4
    float lips_puff_dn; // E8
    float lips_apart_up; // EC
    float lips_apart_dn; // F0
    float lips_l_lower_raise; // F4
    float lips_r_lower_raise; // F8
    float lips_l_corner_dn; // FC
    float lips_r_corner_dn; // 100
    float lips_chin_raise; // 104
    float lips_together_up; // 108
    float lips_together_dn; // 10C
    float lips_l_purse; // 110
    float lips_r_purse; // 114
    float lips_l_funnel; // 118
    float lips_r_funnel; // 11C
    float lips_tighten_up; // 120
    float lips_tighten_dn; // 124
    float lips_mid_shift_l; // 128
    float lips_mid_shift_r; // 12C
    float lips_mid_shift_up; // 130
    float lips_mid_shift_dn; // 134
    float cheek_l_suck; // 138
    float cheek_r_suck; // 13C
    float cheek_l_puff; // 140
    float cheek_r_puff; // 144
    float jaw_mid_open; // 148
    float jaw_mid_close; // 14C
    float jaw_mid_shift_l; // 150
    float jaw_mid_shift_r; // 154
    float jaw_mid_shift_fwd; // 158
    float jaw_mid_shift_back; // 15C
    float jaw_mid_clench; // 160
    float neck_l_stretch; // 164
    float neck_r_stretch; // 168
    float neck_tighten; // 16C
    float neck_l_sternocleidomastoid_flex; // 170
    float neck_r_sternocleidomastoid_flex; // 174
    float neck_l_platysma_flex; // 178
    float neck_r_platysma_flex; // 17C
    float neck_throat_adamsApple_up; // 180
    float neck_throat_adamsApple_dn; // 184
    float neck_throat_compress; // 188
    float neck_throat_open; // 18C
    float neck_l_turn; // 190
    float neck_r_turn; // 194
    float neck_up_turn; // 198
    float neck_dn_turn; // 19C
    float neck_l_tilt; // 1A0
    float neck_r_tilt; // 1A4
    float head_neck_up_turn; // 1A8
    float head_neck_dn_turn; // 1AC
    float head_neck_l_tilt; // 1B0
    float head_neck_r_tilt; // 1B4
    float ear_l_shift_up; // 1B8
    float ear_r_shift_up; // 1BC
    float sculp_mid_slide; // 1C0
    float eye_l_dir_up; // 1C4
    float eye_l_dir_dn; // 1C8
    float eye_l_dir_in; // 1CC
    float eye_l_dir_out; // 1D0
    float eye_r_dir_up; // 1D4
    float eye_r_dir_dn; // 1D8
    float eye_r_dir_in; // 1DC
    float eye_r_dir_out; // 1E0
    float face_gravity_fwd; // 1E4
    float face_gravity_back; // 1E8
    float face_gravity_l; // 1EC
    float face_gravity_r; // 1F0
    float lips_corner_sticky; // 1F4
    float lips_l_corner_up_in_sticky_cutScene; // 1F8
    float lips_l_corner_dn_in_sticky_cutScene; // 1FC
    float lips_l_corner_up_out_sticky_cutScene; // 200
    float lips_l_corner_dn_out_sticky_cutScene; // 204
    float lips_r_corner_up_in_sticky_cutScene; // 208
    float lips_r_corner_up_out_sticky_cutScene; // 20C
    float lips_r_corner_dn_in_sticky_cutScene; // 210
    float lips_r_corner_dn_out_sticky_cutScene; // 214
    float eye_l_pupil_narrow; // 218
    float eye_r_pupil_narrow; // 21C
    float eye_l_pupil_wide; // 220
    float eye_r_pupil_wide; // 224
    float tongue_mid_base_l; // 228
    float tongue_mid_base_r; // 22C
    float tongue_mid_base_dn; // 230
    float tongue_mid_base_up; // 234
    float tongue_mid_base_fwd; // 238
    float tongue_mid_base_front; // 23C
    float tongue_mid_base_back; // 240
    float tongue_mid_fwd; // 244
    float tongue_mid_lift; // 248
    float tongue_mid_tip_l; // 24C
    float tongue_mid_tip_r; // 250
    float tongue_mid_tip_dn; // 254
    float tongue_mid_tip_up; // 258
    float tongue_mid_twist_l; // 25C
    float tongue_mid_twist_r; // 260
    float tongue_mid_thick; // 264
    float nose_l_snearAnimOverrideWeight; // 268
    float nose_r_snearAnimOverrideWeight; // 26C
    float lips_l_nasolabialDeepenerAnimOverrideWeight; // 270
    float lips_r_nasolabialDeepenerAnimOverrideWeight; // 274
    float lips_l_upper_raiseAnimOverrideWeight; // 278
    float lips_r_upper_raiseAnimOverrideWeight; // 27C
    float lips_l_pullAnimOverrideWeight; // 280
    float lips_r_pullAnimOverrideWeight; // 284
    float lips_l_corner_upAnimOverrideWeight; // 288
    float lips_r_corner_upAnimOverrideWeight; // 28C
    float lips_l_corner_wideAnimOverrideWeight; // 290
    float lips_r_corner_wideAnimOverrideWeight; // 294
    float lips_l_corner_stretchAnimOverrideWeight; // 298
    float lips_r_corner_stretchAnimOverrideWeight; // 29C
    float lips_l_stretchAnimOverrideWeight; // 2A0
    float lips_r_stretchAnimOverrideWeight; // 2A4
    float lips_l_corner_sharp_upAnimOverrideWeight; // 2A8
    float lips_r_corner_sharp_upAnimOverrideWeight; // 2AC
    float lips_suck_upAnimOverrideWeight; // 2B0
    float lips_suck_dnAnimOverrideWeight; // 2B4
    float lips_puff_upAnimOverrideWeight; // 2B8
    float lips_puff_dnAnimOverrideWeight; // 2BC
    float lips_apart_upAnimOverrideWeight; // 2C0
    float lips_apart_dnAnimOverrideWeight; // 2C4
    float lips_l_lower_raiseAnimOverrideWeight; // 2C8
    float lips_r_lower_raiseAnimOverrideWeight; // 2CC
    float lips_l_corner_dnAnimOverrideWeight; // 2D0
    float lips_r_corner_dnAnimOverrideWeight; // 2D4
    float lips_chin_raiseAnimOverrideWeight; // 2D8
    float lips_together_upAnimOverrideWeight; // 2DC
    float lips_together_dnAnimOverrideWeight; // 2E0
    float lips_l_purseAnimOverrideWeight; // 2E4
    float lips_r_purseAnimOverrideWeight; // 2E8
    float lips_l_funnelAnimOverrideWeight; // 2EC
    float lips_r_funnelAnimOverrideWeight; // 2F0
    float lips_tighten_upAnimOverrideWeight; // 2F4
    float lips_tighten_dnAnimOverrideWeight; // 2F8
    float lips_mid_shift_lAnimOverrideWeight; // 2FC
    float lips_mid_shift_rAnimOverrideWeight; // 300
    float lips_mid_shift_upAnimOverrideWeight; // 304
    float lips_mid_shift_dnAnimOverrideWeight; // 308
    float cheek_l_puffAnimOverrideWeight; // 30C
    float cheek_r_puffAnimOverrideWeight; // 310
    float jaw_mid_openAnimOverrideWeight; // 314
    float jaw_mid_closeAnimOverrideWeight; // 318
    float jaw_mid_shift_lAnimOverrideWeight; // 31C
    float jaw_mid_shift_rAnimOverrideWeight; // 320
    float jaw_mid_shift_fwdAnimOverrideWeight; // 324
    float jaw_mid_shift_backAnimOverrideWeight; // 328
    float jaw_mid_clenchAnimOverrideWeight; // 32C
    float neck_l_stretchAnimOverrideWeight; // 330
    float neck_r_stretchAnimOverrideWeight; // 334
    float neck_tightenAnimOverrideWeight; // 338
    float neck_l_sternocleidomastoid_flexAnimOverrideWeight; // 33C
    float neck_r_sternocleidomastoid_flexAnimOverrideWeight; // 340
    float neck_l_platysma_flexAnimOverrideWeight; // 344
    float neck_r_platysma_flexAnimOverrideWeight; // 348
    float neck_throat_adamsApple_upAnimOverrideWeight; // 34C
    float neck_throat_adamsApple_dnAnimOverrideWeight; // 350
    float neck_throat_compressAnimOverrideWeight; // 354
    float neck_throat_openAnimOverrideWeight; // 358
    float lips_corner_stickyAnimOverrideWeight; // 35C
    float lips_l_corner_up_in_sticky_cutSceneAnimOverrideWeight; // 360
    float lips_l_corner_dn_in_sticky_cutSceneAnimOverrideWeight; // 364
    float lips_l_corner_up_out_sticky_cutSceneAnimOverrideWeight; // 368
    float lips_l_corner_dn_out_sticky_cutSceneAnimOverrideWeight; // 36C
    float lips_r_corner_up_in_sticky_cutSceneAnimOverrideWeight; // 370
    float lips_r_corner_up_out_sticky_cutSceneAnimOverrideWeight; // 374
    float lips_r_corner_dn_in_sticky_cutSceneAnimOverrideWeight; // 378
    float lips_r_corner_dn_out_sticky_cutSceneAnimOverrideWeight; // 37C
    float tongue_mid_base_lAnimOverrideWeight; // 380
    float tongue_mid_base_rAnimOverrideWeight; // 384
    float tongue_mid_base_dnAnimOverrideWeight; // 388
    float tongue_mid_base_upAnimOverrideWeight; // 38C
    float tongue_mid_base_fwdAnimOverrideWeight; // 390
    float tongue_mid_base_frontAnimOverrideWeight; // 394
    float tongue_mid_base_backAnimOverrideWeight; // 398
    float tongue_mid_fwdAnimOverrideWeight; // 39C
    float tongue_mid_liftAnimOverrideWeight; // 3A0
    float tongue_mid_tip_lAnimOverrideWeight; // 3A4
    float tongue_mid_tip_rAnimOverrideWeight; // 3A8
    float tongue_mid_tip_dnAnimOverrideWeight; // 3AC
    float tongue_mid_tip_upAnimOverrideWeight; // 3B0
    float tongue_mid_twist_lAnimOverrideWeight; // 3B4
    float tongue_mid_twist_rAnimOverrideWeight; // 3B8
    float tongue_mid_thickAnimOverrideWeight; // 3BC
    float eye_l_brows_raise_inLipsyncPoseOutput; // 3C0
    float eye_r_brows_raise_inLipsyncPoseOutput; // 3C4
    float eye_l_brows_raise_outLipsyncPoseOutput; // 3C8
    float eye_r_brows_raise_outLipsyncPoseOutput; // 3CC
    float eye_l_brows_lowerLipsyncPoseOutput; // 3D0
    float eye_r_brows_lowerLipsyncPoseOutput; // 3D4
    float eye_l_brows_lateralLipsyncPoseOutput; // 3D8
    float eye_r_brows_lateralLipsyncPoseOutput; // 3DC
    float eye_l_blinkLipsyncPoseOutput; // 3E0
    float eye_r_blinkLipsyncPoseOutput; // 3E4
    float eye_l_widenLipsyncPoseOutput; // 3E8
    float eye_r_widenLipsyncPoseOutput; // 3EC
    float eye_l_oculi_squint_innerLipsyncPoseOutput; // 3F0
    float eye_r_oculi_squint_innerLipsyncPoseOutput; // 3F4
    float eye_l_oculi_squint_outer_lowerLipsyncPoseOutput; // 3F8
    float eye_r_oculi_squint_outer_lowerLipsyncPoseOutput; // 3FC
    float eye_l_oculi_squint_outer_upperLipsyncPoseOutput; // 400
    float eye_r_oculi_squint_outer_upperLipsyncPoseOutput; // 404
    float nose_l_compressLipsyncPoseOutput; // 408
    float nose_r_compressLipsyncPoseOutput; // 40C
    float nose_l_breathe_inLipsyncPoseOutput; // 410
    float nose_r_breathe_inLipsyncPoseOutput; // 414
    float nose_l_breathe_outLipsyncPoseOutput; // 418
    float nose_r_breathe_outLipsyncPoseOutput; // 41C
    float nose_l_snearLipsyncPoseOutput; // 420
    float nose_r_snearLipsyncPoseOutput; // 424
    float lips_l_nasolabialDeepenerLipsyncPoseOutput; // 428
    float lips_r_nasolabialDeepenerLipsyncPoseOutput; // 42C
    float lips_l_upper_raiseLipsyncPoseOutput; // 430
    float lips_r_upper_raiseLipsyncPoseOutput; // 434
    float lips_l_pullLipsyncPoseOutput; // 438
    float lips_r_pullLipsyncPoseOutput; // 43C
    float lips_l_corner_upLipsyncPoseOutput; // 440
    float lips_r_corner_upLipsyncPoseOutput; // 444
    float lips_l_corner_wideLipsyncPoseOutput; // 448
    float lips_r_corner_wideLipsyncPoseOutput; // 44C
    float lips_l_corner_stretchLipsyncPoseOutput; // 450
    float lips_r_corner_stretchLipsyncPoseOutput; // 454
    float lips_l_stretchLipsyncPoseOutput; // 458
    float lips_r_stretchLipsyncPoseOutput; // 45C
    float lips_l_corner_sharp_upLipsyncPoseOutput; // 460
    float lips_r_corner_sharp_upLipsyncPoseOutput; // 464
    float lips_suck_upLipsyncPoseOutput; // 468
    float lips_suck_dnLipsyncPoseOutput; // 46C
    float lips_puff_upLipsyncPoseOutput; // 470
    float lips_puff_dnLipsyncPoseOutput; // 474
    float lips_apart_upLipsyncPoseOutput; // 478
    float lips_apart_dnLipsyncPoseOutput; // 47C
    float lips_l_lower_raiseLipsyncPoseOutput; // 480
    float lips_r_lower_raiseLipsyncPoseOutput; // 484
    float lips_l_corner_dnLipsyncPoseOutput; // 488
    float lips_r_corner_dnLipsyncPoseOutput; // 48C
    float lips_chin_raiseLipsyncPoseOutput; // 490
    float lips_together_upLipsyncPoseOutput; // 494
    float lips_together_dnLipsyncPoseOutput; // 498
    float lips_l_purseLipsyncPoseOutput; // 49C
    float lips_r_purseLipsyncPoseOutput; // 4A0
    float lips_l_funnelLipsyncPoseOutput; // 4A4
    float lips_r_funnelLipsyncPoseOutput; // 4A8
    float lips_tighten_upLipsyncPoseOutput; // 4AC
    float lips_tighten_dnLipsyncPoseOutput; // 4B0
    float lips_mid_shift_lLipsyncPoseOutput; // 4B4
    float lips_mid_shift_rLipsyncPoseOutput; // 4B8
    float lips_mid_shift_upLipsyncPoseOutput; // 4BC
    float lips_mid_shift_dnLipsyncPoseOutput; // 4C0
    float cheek_l_suckLipsyncPoseOutput; // 4C4
    float cheek_r_suckLipsyncPoseOutput; // 4C8
    float cheek_l_puffLipsyncPoseOutput; // 4CC
    float cheek_r_puffLipsyncPoseOutput; // 4D0
    float jaw_mid_openLipsyncPoseOutput; // 4D4
    float jaw_mid_closeLipsyncPoseOutput; // 4D8
    float jaw_mid_shift_lLipsyncPoseOutput; // 4DC
    float jaw_mid_shift_rLipsyncPoseOutput; // 4E0
    float jaw_mid_shift_fwdLipsyncPoseOutput; // 4E4
    float jaw_mid_shift_backLipsyncPoseOutput; // 4E8
    float jaw_mid_clenchLipsyncPoseOutput; // 4EC
    float neck_l_stretchLipsyncPoseOutput; // 4F0
    float neck_r_stretchLipsyncPoseOutput; // 4F4
    float neck_tightenLipsyncPoseOutput; // 4F8
    float neck_l_sternocleidomastoid_flexLipsyncPoseOutput; // 4FC
    float neck_r_sternocleidomastoid_flexLipsyncPoseOutput; // 500
    float neck_l_platysma_flexLipsyncPoseOutput; // 504
    float neck_r_platysma_flexLipsyncPoseOutput; // 508
    float neck_throat_adamsApple_upLipsyncPoseOutput; // 50C
    float neck_throat_adamsApple_dnLipsyncPoseOutput; // 510
    float neck_throat_compressLipsyncPoseOutput; // 514
    float neck_throat_openLipsyncPoseOutput; // 518
    float neck_l_turnLipsyncPoseOutput; // 51C
    float neck_r_turnLipsyncPoseOutput; // 520
    float neck_up_turnLipsyncPoseOutput; // 524
    float neck_dn_turnLipsyncPoseOutput; // 528
    float neck_l_tiltLipsyncPoseOutput; // 52C
    float neck_r_tiltLipsyncPoseOutput; // 530
    float head_neck_up_turnLipsyncPoseOutput; // 534
    float head_neck_dn_turnLipsyncPoseOutput; // 538
    float head_neck_l_tiltLipsyncPoseOutput; // 53C
    float head_neck_r_tiltLipsyncPoseOutput; // 540
    float ear_l_shift_upLipsyncPoseOutput; // 544
    float ear_r_shift_upLipsyncPoseOutput; // 548
    float sculp_mid_slideLipsyncPoseOutput; // 54C
    float eye_l_dir_upLipsyncPoseOutput; // 550
    float eye_l_dir_dnLipsyncPoseOutput; // 554
    float eye_l_dir_inLipsyncPoseOutput; // 558
    float eye_l_dir_outLipsyncPoseOutput; // 55C
    float eye_r_dir_upLipsyncPoseOutput; // 560
    float eye_r_dir_dnLipsyncPoseOutput; // 564
    float eye_r_dir_inLipsyncPoseOutput; // 568
    float eye_r_dir_outLipsyncPoseOutput; // 56C
    float face_gravity_fwdLipsyncPoseOutput; // 570
    float face_gravity_backLipsyncPoseOutput; // 574
    float face_gravity_lLipsyncPoseOutput; // 578
    float face_gravity_rLipsyncPoseOutput; // 57C
    float lips_corner_stickyLipsyncPoseOutput; // 580
    float lips_l_corner_up_in_sticky_cutSceneLipsyncPoseOutput; // 584
    float lips_l_corner_dn_in_sticky_cutSceneLipsyncPoseOutput; // 588
    float lips_l_corner_up_out_sticky_cutSceneLipsyncPoseOutput; // 58C
    float lips_l_corner_dn_out_sticky_cutSceneLipsyncPoseOutput; // 590
    float lips_r_corner_up_in_sticky_cutSceneLipsyncPoseOutput; // 594
    float lips_r_corner_up_out_sticky_cutSceneLipsyncPoseOutput; // 598
    float lips_r_corner_dn_in_sticky_cutSceneLipsyncPoseOutput; // 59C
    float lips_r_corner_dn_out_sticky_cutSceneLipsyncPoseOutput; // 5A0
    float eye_l_pupil_narrowLipsyncPoseOutput; // 5A4
    float eye_r_pupil_narrowLipsyncPoseOutput; // 5A8
    float eye_l_pupil_wideLipsyncPoseOutput; // 5AC
    float eye_r_pupil_wideLipsyncPoseOutput; // 5B0
    float tongue_mid_base_lLipsyncPoseOutput; // 5B4
    float tongue_mid_base_rLipsyncPoseOutput; // 5B8
    float tongue_mid_base_dnLipsyncPoseOutput; // 5BC
    float tongue_mid_base_upLipsyncPoseOutput; // 5C0
    float tongue_mid_base_fwdLipsyncPoseOutput; // 5C4
    float tongue_mid_base_frontLipsyncPoseOutput; // 5C8
    float tongue_mid_base_backLipsyncPoseOutput; // 5CC
    float tongue_mid_fwdLipsyncPoseOutput; // 5D0
    float tongue_mid_liftLipsyncPoseOutput; // 5D4
    float tongue_mid_tip_lLipsyncPoseOutput; // 5D8
    float tongue_mid_tip_rLipsyncPoseOutput; // 5DC
    float tongue_mid_tip_dnLipsyncPoseOutput; // 5E0
    float tongue_mid_tip_upLipsyncPoseOutput; // 5E4
    float tongue_mid_twist_lLipsyncPoseOutput; // 5E8
    float tongue_mid_twist_rLipsyncPoseOutput; // 5EC
    float tongue_mid_thickLipsyncPoseOutput; // 5F0
    float eye_l_brows_raise_inWrnkl; // 5F4
    float eye_r_brows_raise_inWrnkl; // 5F8
    float eye_l_brows_raise_outWrnkl; // 5FC
    float eye_r_brows_raise_outWrnkl; // 600
    float eye_l_brows_lowerWrnkl; // 604
    float eye_r_brows_lowerWrnkl; // 608
    float eye_l_brows_lateralWrnkl; // 60C
    float eye_r_brows_lateralWrnkl; // 610
    float eye_l_oculi_squint_outer_lowerWrnkl; // 614
    float eye_r_oculi_squint_outer_lowerWrnkl; // 618
    float eye_l_oculi_squint_outer_upperWrnkl; // 61C
    float eye_r_oculi_squint_outer_upperWrnkl; // 620
    float nose_l_snearWrnkl; // 624
    float nose_r_snearWrnkl; // 628
    float lips_l_upper_raiseWrnkl; // 62C
    float lips_r_upper_raiseWrnkl; // 630
    float lips_l_corner_upWrnkl; // 634
    float lips_r_corner_upWrnkl; // 638
    float lips_l_corner_wideWrnkl; // 63C
    float lips_r_corner_wideWrnkl; // 640
    float lips_l_corner_stretchWrnkl; // 644
    float lips_r_corner_stretchWrnkl; // 648
    float lips_l_lower_raiseWrnkl; // 64C
    float lips_r_lower_raiseWrnkl; // 650
    float lips_chin_raiseWrnkl; // 654
    float lips_l_purseWrnkl; // 658
    float lips_r_purseWrnkl; // 65C
    float lips_l_funnelWrnkl; // 660
    float lips_r_funnelWrnkl; // 664
    float jaw_mid_openWrnkl; // 668
    float neck_l_stretchWrnkl; // 66C
    float neck_r_stretchWrnkl; // 670
    float head_neck_dn_turnWrnkl; // 674
};
RED4EXT_ASSERT_SIZE(SermoTestController, 0x678);
} // namespace anim
} // namespace RED4ext
