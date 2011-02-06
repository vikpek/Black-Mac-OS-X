/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTitledFrame.h"

@class NSButton, NSString;

@interface NSThemeFrame : NSTitledFrame
{
    NSButton *toolbarButton;
    int toolbarVisibleStatus;
    struct CGLayer *showToolbarTransitionLayer;
    struct CGSize showToolbarPreWindowSize;
    NSButton *modeButton;
    long long leftGroupTrackingTagNum;
    long long rightGroupTrackingTagNum;
    struct {
        unsigned int mouseInsideLeftGroup:1;
        unsigned int mouseInsideRightGroup:1;
        unsigned int bottomCornerRounded:2;
        unsigned int movableByBottomBar:1;
        unsigned int reserved:27;
    } _tFlags;
    int widgetState;
    NSString *displayName;
    NSButton *lockButton;
    double topBorderThickness;
    double bottomBorderThickness;
}

+ (void)initialize;	// IMP=0x0002121a
+ (id)_bevelForEdge:(unsigned long long)arg1 isHUD:(BOOL)arg2 isDarkWindow:(BOOL)arg3;	// IMP=0x00263368
+ (void)drawBevel:(struct CGRect)arg1 inFrame:(struct CGRect)arg2 topCornerRounded:(BOOL)arg3 bottomCornerRounded:(BOOL)arg4 isHUD:(BOOL)arg5 isDarkWindow:(BOOL)arg6;	// IMP=0x002622e3
+ (void)drawBevel:(struct CGRect)arg1 inFrame:(struct CGRect)arg2 topCornerRounded:(BOOL)arg3 bottomCornerRounded:(BOOL)arg4;	// IMP=0x005c4f88
+ (double)_windowBorderThickness:(unsigned long long)arg1;	// IMP=0x000465e4
+ (double)_minXWindowBorderWidth:(unsigned long long)arg1;	// IMP=0x00086336
+ (double)_maxXWindowBorderWidth:(unsigned long long)arg1;	// IMP=0x000465b8
+ (double)_minYWindowBorderHeight:(unsigned long long)arg1;	// IMP=0x005c4516
+ (double)_windowTitlebarButtonSpacingWidth:(unsigned long long)arg1;	// IMP=0x005c4520
+ (double)_windowFileButtonSpacingWidth:(unsigned long long)arg1;	// IMP=0x005c453d
+ (double)_minXTitlebarWidgetInset:(unsigned long long)arg1;	// IMP=0x005c454b
+ (double)_maxXTitlebarWidgetInset:(unsigned long long)arg1;	// IMP=0x005c4577
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x005c4a8b
+ (double)_windowSideTitlebarTitleMinWidth:(unsigned long long)arg1;	// IMP=0x000464ec
+ (double)_windowTitlebarTitleMinHeight:(unsigned long long)arg1;	// IMP=0x0004f40b
+ (double)_sideTitlebarWidth:(unsigned long long)arg1;	// IMP=0x000464da
+ (double)_titlebarHeight:(unsigned long long)arg1;	// IMP=0x0004f3f9
+ (double)_resizeHeight:(unsigned long long)arg1;	// IMP=0x00046598
+ (BOOL)_resizeFromEdge;	// IMP=0x0023f896
+ (struct CGSize)sizeOfTitlebarButtons:(unsigned long long)arg1;	// IMP=0x0004b7c6
+ (double)_contentToFrameMinXWidth:(unsigned long long)arg1;	// IMP=0x000464ba
+ (double)_contentToFrameMaxXWidth:(unsigned long long)arg1;	// IMP=0x000465a5
+ (double)_contentToFrameMinYHeight:(unsigned long long)arg1;	// IMP=0x00046584
+ (double)_contentToFrameMaxYHeight:(unsigned long long)arg1;	// IMP=0x000465c5
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;	// IMP=0x0004593a
- (BOOL)_isDarkWindow;	// IMP=0x00086722
- (BOOL)_movableByBottomBar;	// IMP=0x000b6003
- (void)_setMovableByBottomBar:(BOOL)arg1;	// IMP=0x005c44c6
- (BOOL)_effectiveMovableByBottomBar;	// IMP=0x00087e60
- (float)roundedCornerRadius;	// IMP=0x000866f8
- (void)setBottomCornerRounded:(BOOL)arg1;	// IMP=0x00210742
- (BOOL)bottomCornerRounded;	// IMP=0x00050b8d
- (struct CGSize)_topCornerSize;	// IMP=0x0008665e
- (struct CGSize)_bottomCornerSize;	// IMP=0x00086744
- (void *)_createWindowOpaqueShape;	// IMP=0x000864e9
- (void)shapeWindow;	// IMP=0x000505ab
- (void)_recursiveDisplayRectIfNeededIgnoringOpacity:(struct CGRect)arg1 isVisibleRect:(BOOL)arg2 rectIsVisibleRectForView:(id)arg3 topView:(BOOL)arg4;	// IMP=0x000fd9b2
- (struct CGRect)overlayBounds;	// IMP=0x00133282
- (void)drawOverlayRect:(struct CGRect)arg1;	// IMP=0x00133536
- (void *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2;	// IMP=0x00087f44
- (void)_drawFrameInterior:(struct CGRect *)arg1 clip:(struct CGRect)arg2;	// IMP=0x00102392
- (void)_setTextShadow:(BOOL)arg1;	// IMP=0x005c5b8d
- (BOOL)_isOnePieceTitleAndToolbar;	// IMP=0x00087ed1
- (struct CGRect)_separatorRectForInactiveWindow;	// IMP=0x00262194
- (void)_setFrameNeedsDisplay:(BOOL)arg1;	// IMP=0x000f35ff
- (void)_drawUnifiedToolbarBackgroundInRect:(struct CGRect)arg1 withState:(long long)arg2;	// IMP=0x005c6052
- (void)_drawUnifiedToolbar:(int)arg1;	// IMP=0x00102bd3
- (void)_drawTitleBar:(struct CGRect)arg1;	// IMP=0x001023e0
- (void)_drawResizeIndicators:(struct CGRect)arg1;	// IMP=0x00133719
- (void)_drawFrameRects:(struct CGRect)arg1;	// IMP=0x005c6ac7
- (void)drawFrame:(struct CGRect)arg1;	// IMP=0x00101fca
- (BOOL)_isHUDWindow;	// IMP=0x00046ee8
- (id)contentFill;	// IMP=0x000fd537
- (void)viewDidEndLiveResize;	// IMP=0x005c4f3b
- (double)contentAlpha;	// IMP=0x000867ce
- (void)setThemeFrameWidgetState:(int)arg1;	// IMP=0x005c4f1f
- (BOOL)constrainResizeEdge:(unsigned long long *)arg1 withDelta:(struct CGSize)arg2 elapsedTime:(double)arg3;	// IMP=0x005c44e7
- (void)addFileButton:(id)arg1;	// IMP=0x005c4ed5
- (void)_updateButtons;	// IMP=0x0004690f
- (void)_updateButtonState;	// IMP=0x00275c0b
- (id)newCloseButton;	// IMP=0x00046f8d
- (id)newZoomButton;	// IMP=0x0004a741
- (id)newMiniaturizeButton;	// IMP=0x0004a881
- (id)newToolbarButton;	// IMP=0x000aa731
- (id)newLockButton;	// IMP=0x005c4e61
- (id)newFileButton;	// IMP=0x000eba11
- (void)_resetTitleBarButtons;	// IMP=0x005c4d5f
- (void)setDocumentEdited:(BOOL)arg1;	// IMP=0x001befe8
- (id)toolbarButton;	// IMP=0x000aa926
- (id)lockButton;	// IMP=0x005c44f3
- (id)modeButton;	// IMP=0x0019a738
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;	// IMP=0x000465f1
- (void)setStyleMask:(unsigned long long)arg1;	// IMP=0x00287234
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x00046878
- (void)dealloc;	// IMP=0x001a6be2
- (BOOL)preservesContentDuringLiveResize;	// IMP=0x005c4d45
- (void)setFrameSize:(struct CGSize)arg1;	// IMP=0x0004f4b8
- (BOOL)_canHaveToolbar;	// IMP=0x0008d63d
- (BOOL)_toolbarIsInTransition;	// IMP=0x0004e7b4
- (BOOL)_toolbarIsShown;	// IMP=0x0008d664
- (BOOL)_toolbarIsHidden;	// IMP=0x000f3824
- (id)_toolbarView;	// IMP=0x00087ea3
- (id)_toolbar;	// IMP=0x000a95e8
- (double)_distanceFromToolbarBaseToTitlebar;	// IMP=0x0004deab
- (unsigned long long)_shadowFlags;	// IMP=0x00134697
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x000ccb4c
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x0004dc7e
- (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x005c4cb1
- (struct CGRect)contentRect;	// IMP=0x00101f61
- (struct CGRect)_contentRectExcludingToolbar;	// IMP=0x000a97a0
- (struct CGRect)_contentRectIncludingToolbarAtHome;	// IMP=0x000a973a
- (void)_setToolbarShowHideResizeWeightingOptimizationOn:(BOOL)arg1;	// IMP=0x000a9685
- (BOOL)_usingToolbarShowHideWeightingOptimization;	// IMP=0x0016d2e9
- (void)handleSetFrameCommonRedisplay;	// IMP=0x0016d202
- (void)_startLiveResizeAsTopLevel;	// IMP=0x005c4c4f
- (void)_endLiveResizeAsTopLevel;	// IMP=0x005c4bfd
- (void)_growContentReshapeContentAndToolbarView:(int)arg1 animate:(BOOL)arg2;	// IMP=0x005c63b4
- (BOOL)_growWindowReshapeContentAndToolbarView:(int)arg1 animate:(BOOL)arg2;	// IMP=0x000a8879
- (void)_reshapeContentAndToolbarView:(int)arg1 resizeWindow:(BOOL)arg2 animate:(BOOL)arg3;	// IMP=0x000a86c1
- (void)_toolbarFrameSizeChanged:(id)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x005c6278
- (void)_syncToolbarPosition;	// IMP=0x00283060
- (void)_showHideToolbar:(int)arg1 resizeWindow:(BOOL)arg2 animate:(BOOL)arg3;	// IMP=0x000a7178
- (void)_showToolbarWithAnimation:(BOOL)arg1;	// IMP=0x000a70b2
- (void)_hideToolbarWithAnimation:(BOOL)arg1;	// IMP=0x005c5c1e
- (void)_drawToolbarTransitionIfNecessary;	// IMP=0x00107c57
- (void)_computeHeightOfTop:(BOOL)arg1 bottom:(BOOL)arg2;	// IMP=0x0004d759
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x000b5a17
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;	// IMP=0x0004a695
- (double)_topBarHeight;	// IMP=0x000b6023
- (double)_bottomBarHeight;	// IMP=0x00050c15
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00101600
- (void)drawWindowBackgroundRect:(struct CGRect)arg1;	// IMP=0x0013a1fb
- (void)drawWindowBackgroundRegion:(void *)arg1;	// IMP=0x001079da
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;	// IMP=0x005c4504
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)arg1;	// IMP=0x005c450c
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x0013925e
- (void)cursorUpdate:(id)arg1;	// IMP=0x00229810
- (struct CGRect)_leftGroupRect;	// IMP=0x0004be52
- (struct CGRect)_rightGroupRect;	// IMP=0x0004c83e
- (void)_updateWidgets;	// IMP=0x0004c935
- (void)_updateMouseTracking;	// IMP=0x0004bc9c
- (void)mouseEntered:(id)arg1;	// IMP=0x0026b88c
- (void)mouseExited:(id)arg1;	// IMP=0x0026b8ca
- (void)_setMouseEnteredGroup:(BOOL)arg1 entered:(BOOL)arg2;	// IMP=0x0004cd6f
- (BOOL)_mouseInGroup:(id)arg1;	// IMP=0x00108d5c
- (struct CGSize)miniaturizedSize;	// IMP=0x005c600e
- (double)_minXTitlebarDecorationMinWidth;	// IMP=0x000f1d9a
- (double)_maxXTitlebarDecorationMinWidth;	// IMP=0x000f1fe5
- (struct CGSize)minFrameSize;	// IMP=0x005c4959
- (double)_windowBorderThickness;	// IMP=0x005c4595
- (double)_windowTitlebarXResizeBorderThickness;	// IMP=0x005c459f
- (double)_windowTitlebarYResizeBorderThickness;	// IMP=0x005c45a9
- (double)_windowResizeBorderThickness;	// IMP=0x005c45b3
- (double)_minXWindowBorderWidth;	// IMP=0x00086475
- (double)_maxXWindowBorderWidth;	// IMP=0x0008647f
- (double)_minYWindowBorderHeight;	// IMP=0x0004b6b1
- (double)_maxYWindowBorderHeight;	// IMP=0x0004b6fb
- (double)_minYTitlebarButtonsOffset;	// IMP=0x00086489
- (double)_minYTitlebarTitleOffset;	// IMP=0x005c45bd
- (double)_sideTitlebarWidth;	// IMP=0x0004b6be
- (double)_titlebarHeight;	// IMP=0x0004f3bb
- (struct CGRect)_defaultTitlebarTitleRect;	// IMP=0x000ebe72
- (struct CGRect)_titlebarTitleRect;	// IMP=0x000ebda0
- (struct CGRect)titlebarRect;	// IMP=0x0004b537
- (double)_windowTitlebarTitleMinHeight;	// IMP=0x005c491c
- (struct CGSize)_sizeOfTitlebarFileButton;	// IMP=0x000f1fa4
- (struct CGSize)sizeOfTitlebarToolbarButton;	// IMP=0x000f2063
- (double)_windowTitlebarButtonSpacingWidth;	// IMP=0x0004bac0
- (double)_windowFileButtonSpacingWidth;	// IMP=0x000f1fd7
- (double)_minXTitlebarWidgetInset;	// IMP=0x0004b705
- (double)_maxXTitlebarWidgetInset;	// IMP=0x000f20a1
- (double)_minXTitlebarButtonsWidth;	// IMP=0x000f1e34
- (double)_maxXTitlebarButtonsWidth;	// IMP=0x000f1ff7
- (struct CGPoint)_closeButtonOrigin;	// IMP=0x0004b2d0
- (struct CGPoint)_zoomButtonOrigin;	// IMP=0x0004bae9
- (struct CGPoint)_collapseButtonOrigin;	// IMP=0x0004b928
- (struct CGPoint)_toolbarButtonOrigin;	// IMP=0x000aa7a8
- (struct CGPoint)_lockButtonOrigin;	// IMP=0x005c68f4
- (struct CGPoint)_fileButtonOrigin;	// IMP=0x000ebc65
- (void)_tileTitlebarAndRedisplay:(BOOL)arg1;	// IMP=0x0004af18
- (struct CGRect)_commandPopupRect;	// IMP=0x000f26da
- (struct CGRect)_draggableFrame;	// IMP=0x00087bf7
- (void)_resetDragMargins;	// IMP=0x0004cf09
- (double)_maxYTitlebarDragHeight;	// IMP=0x005c490a
- (double)_minXTitlebarDragWidth;	// IMP=0x005c48f9
- (double)_maxXTitlebarDragWidth;	// IMP=0x005c48e8
- (double)_contentToFrameMinXWidth;	// IMP=0x000a9915
- (double)_contentToFrameMaxXWidth;	// IMP=0x000a9964
- (double)_contentToFrameMinYHeight;	// IMP=0x000a9953
- (double)_contentToFrameMaxYHeight;	// IMP=0x000a9976
- (double)_windowResizeCornerThickness;	// IMP=0x005c45cd
- (struct CGRect)_minYResizeRect;	// IMP=0x005c45d7
- (struct CGRect)_minYminXResizeRect;	// IMP=0x0023f929
- (struct CGRect)_minYmaxXResizeRect;	// IMP=0x0023f957
- (struct CGRect)_minXResizeRect;	// IMP=0x005c4605
- (struct CGRect)_minXminYResizeRect;	// IMP=0x0023f89f
- (struct CGRect)_minXmaxYResizeRect;	// IMP=0x0023f8cd
- (struct CGRect)_maxYResizeRect;	// IMP=0x005c4633
- (struct CGRect)_maxYminXResizeRect;	// IMP=0x0023f985
- (struct CGRect)_maxYmaxXResizeRect;	// IMP=0x0023f9b3
- (struct CGRect)_maxXResizeRect;	// IMP=0x005c4661
- (struct CGRect)_maxXminYResizeRect;	// IMP=0x000509af
- (struct CGRect)_maxXmaxYResizeRect;	// IMP=0x0023f8fb
- (struct CGRect)_minXTitlebarResizeRect;	// IMP=0x005c4691
- (struct CGRect)_maxXTitlebarResizeRect;	// IMP=0x005c46bf
- (struct CGRect)_minXBorderRect;	// IMP=0x005c558f
- (struct CGRect)_maxXBorderRect;	// IMP=0x005c46ed
- (struct CGRect)_maxYBorderRect;	// IMP=0x005c54a3
- (struct CGRect)_minYBorderRect;	// IMP=0x005c53b8
- (void)_invalidateTitleCellSize;	// IMP=0x000468e7
- (void)_resetTitleFont;	// IMP=0x005c4879
- (BOOL)_isUtility;	// IMP=0x0004a969
- (double)_sheetHeightAdjustment;	// IMP=0x00283029
- (void)_setSheet:(BOOL)arg1;	// IMP=0x0027d24e
- (BOOL)_isSheet;	// IMP=0x00046ebc
- (BOOL)_isResizable;	// IMP=0x0004a867
- (BOOL)_isClosable;	// IMP=0x00046f03
- (BOOL)_isMiniaturizable;	// IMP=0x0004a8f6
- (BOOL)_hasToolbar;	// IMP=0x00046f1c
- (struct CGRect)_growBoxRect;	// IMP=0x0005079c
- (BOOL)_canDrawWindowGrowBox;	// IMP=0x0011c27a
- (void)_drawGrowBoxWithClip:(struct CGRect)arg1 inRect:(struct CGRect)arg2 opaque:(BOOL)arg3;	// IMP=0x00133853
- (void)_drawGrowBoxWithClip:(struct CGRect)arg1;	// IMP=0x00133799
- (BOOL)_inactiveButtonsNeedMask;	// IMP=0x005c471d
- (BOOL)_mouseInPopupRect:(id)arg1;	// IMP=0x005c5f38
- (BOOL)_mouseInTitleRect:(id)arg1;	// IMP=0x005c5e63
- (void)mouseDown:(id)arg1;	// IMP=0x0023f066
- (void)rightMouseDown:(id)arg1;	// IMP=0x005c47f2
- (id)menu;	// IMP=0x005c473c
- (id)menuForEvent:(id)arg1;	// IMP=0x005c5cb8
- (id)_displayName;	// IMP=0x005c4728
- (void)_setDisplayName:(id)arg1;	// IMP=0x00203b75
- (BOOL)_shouldRepresentFilename;	// IMP=0x005c521e
- (BOOL)_shouldShowDocumentIcon;	// IMP=0x0004aebf
- (void)setRepresentedURL:(id)arg1;	// IMP=0x000eb8cb
- (void)setRepresentedFilename:(id)arg1;	// IMP=0x005c5190

@end

