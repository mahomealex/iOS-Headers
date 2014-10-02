//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLDisplayBundle.h>

#import "QLScrubViewDataSource.h"
#import "UIScrollViewDelegate.h"
#import "UIWebPDFViewHandlerDelegate.h"
#import "UIWebViewDelegate.h"

@class NSData, NSMutableArray, NSString, NSURLRequest, QLPDFHanderDelegateForwarder, QLPreviewConverter, QLScrubView, UIView, UIWebView;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate>
{
    UIWebView *_webView;
    UIView *_accessoryView;
    QLPreviewConverter *_previewConverter;
    NSURLRequest *_previewRequest;
    unsigned int _isLoadedDuringZoom:1;
    unsigned int _isHTMLContent:1;
    unsigned int _isXMLContent:1;
    unsigned int _isPDFContent:1;
    unsigned int _isSpreadsheetContent:1;
    unsigned int _isPlainText:1;
    unsigned int _isRTFContent:1;
    unsigned int _isCSVContent:1;
    unsigned int _loadStarted:1;
    float _defaultZoom;
    float _navigationBarVerticalOffset;
    QLScrubView *_scrubView;
    int _lastPage;
    BOOL _inScroll;
    BOOL _webViewReadyForThumbnailing;
    NSMutableArray *_htmlSlideNodes;
    NSData *_pdfPreviewData;
    QLPDFHanderDelegateForwarder *_forwarder;
}

- (id)gestureRecognizersForFullScreenDisplay;
- (id)printPageHelper;
- (id)pdfPreviewData;
- (void)userInteractedWithScrubView:(id)arg1;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned int)arg2;
- (struct CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned int)arg2;
- (id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned int)arg2;
- (id)_htmlSlideNodes;
- (id)_htmlPageXPath;
- (int)numberOfPagesInScrubView:(id)arg1;
- (void)scrollToPage:(unsigned int)arg1;
- (unsigned int)currentPageNumber;
- (struct CGSize)pageSizeAtIndex:(int)arg1;
- (int)pageCount;
- (void)_hideScrubberIfNeeded:(double)arg1;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_showScrubberIfNeeded:(double)arg1;
- (id)_scrubView:(BOOL)arg1;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
- (struct CGPDFDocument *)_getCGPDFDocumentRef;
- (id)alertViewForUIWebPDFViewHandler:(id)arg1;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateContentOffsetAnimated:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadWithHints:(id)arg1;
- (void)cancelLoad;
- (id)previewConverter;
- (id)_copyPreviewConverterForPreviewItem:(id)arg1;
- (struct CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(struct CGPoint)arg2;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)_tearDownWebView;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (int)airPlayMode;
- (id)_getWebView:(BOOL)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
