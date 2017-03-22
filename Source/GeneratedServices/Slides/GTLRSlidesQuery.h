// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Slides API (slides/v1)
// Description:
//   An API for creating and editing Google Slides presentations.
// Documentation:
//   https://developers.google.com/slides/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSlides_BatchUpdatePresentationRequest;
@class GTLRSlides_Presentation;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// thumbnailPropertiesMimeType

/** Value: "PNG" */
GTLR_EXTERN NSString * const kGTLRSlidesThumbnailPropertiesMimeTypePng;

// ----------------------------------------------------------------------------
// thumbnailPropertiesThumbnailSize

/** Value: "LARGE" */
GTLR_EXTERN NSString * const kGTLRSlidesThumbnailPropertiesThumbnailSizeLarge;
/** Value: "THUMBNAIL_SIZE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSlidesThumbnailPropertiesThumbnailSizeThumbnailSizeUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Slides query classes.
 */
@interface GTLRSlidesQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Applies one or more updates to the presentation.
 *  Each request is validated before
 *  being applied. If any request is not valid, then the entire request will
 *  fail and nothing will be applied.
 *  Some requests have replies to
 *  give you some information about how they are applied. Other requests do
 *  not need to return information; these each return an empty reply.
 *  The order of replies matches that of the requests.
 *  For example, suppose you call batchUpdate with four updates, and only the
 *  third one returns information. The response would have two empty replies:
 *  the reply to the third request, and another empty reply, in that order.
 *  Because other users may be editing the presentation, the presentation
 *  might not exactly reflect your changes: your changes may
 *  be altered with respect to collaborator changes. If there are no
 *  collaborators, the presentation should reflect your changes. In any case,
 *  the updates in your request are guaranteed to be applied together
 *  atomically.
 *
 *  Method: slides.presentations.batchUpdate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSlidesDrive
 *    @c kGTLRAuthScopeSlidesDriveReadonly
 *    @c kGTLRAuthScopeSlidesPresentations
 *    @c kGTLRAuthScopeSlidesSpreadsheets
 *    @c kGTLRAuthScopeSlidesSpreadsheetsReadonly
 */
@interface GTLRSlidesQuery_PresentationsBatchUpdate : GTLRSlidesQuery
// Previous library name was
//   +[GTLQuerySlides queryForPresentationsBatchUpdateWithObject:presentationId:]

/** The presentation to apply the updates to. */
@property(nonatomic, copy, nullable) NSString *presentationId;

/**
 *  Fetches a @c GTLRSlides_BatchUpdatePresentationResponse.
 *
 *  Applies one or more updates to the presentation.
 *  Each request is validated before
 *  being applied. If any request is not valid, then the entire request will
 *  fail and nothing will be applied.
 *  Some requests have replies to
 *  give you some information about how they are applied. Other requests do
 *  not need to return information; these each return an empty reply.
 *  The order of replies matches that of the requests.
 *  For example, suppose you call batchUpdate with four updates, and only the
 *  third one returns information. The response would have two empty replies:
 *  the reply to the third request, and another empty reply, in that order.
 *  Because other users may be editing the presentation, the presentation
 *  might not exactly reflect your changes: your changes may
 *  be altered with respect to collaborator changes. If there are no
 *  collaborators, the presentation should reflect your changes. In any case,
 *  the updates in your request are guaranteed to be applied together
 *  atomically.
 *
 *  @param object The @c GTLRSlides_BatchUpdatePresentationRequest to include in
 *    the query.
 *  @param presentationId The presentation to apply the updates to.
 *
 *  @returns GTLRSlidesQuery_PresentationsBatchUpdate
 */
+ (instancetype)queryWithObject:(GTLRSlides_BatchUpdatePresentationRequest *)object
                 presentationId:(NSString *)presentationId;

@end

/**
 *  Creates a new presentation using the title given in the request. Other
 *  fields in the request are ignored.
 *  Returns the created presentation.
 *
 *  Method: slides.presentations.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSlidesDrive
 *    @c kGTLRAuthScopeSlidesPresentations
 */
@interface GTLRSlidesQuery_PresentationsCreate : GTLRSlidesQuery
// Previous library name was
//   +[GTLQuerySlides queryForPresentationsCreateWithObject:]

/**
 *  Fetches a @c GTLRSlides_Presentation.
 *
 *  Creates a new presentation using the title given in the request. Other
 *  fields in the request are ignored.
 *  Returns the created presentation.
 *
 *  @param object The @c GTLRSlides_Presentation to include in the query.
 *
 *  @returns GTLRSlidesQuery_PresentationsCreate
 */
+ (instancetype)queryWithObject:(GTLRSlides_Presentation *)object;

@end

/**
 *  Gets the latest version of the specified presentation.
 *
 *  Method: slides.presentations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSlidesDrive
 *    @c kGTLRAuthScopeSlidesDriveReadonly
 *    @c kGTLRAuthScopeSlidesPresentations
 *    @c kGTLRAuthScopeSlidesPresentationsReadonly
 */
@interface GTLRSlidesQuery_PresentationsGet : GTLRSlidesQuery
// Previous library name was
//   +[GTLQuerySlides queryForPresentationsGetWithpresentationId:]

/** The ID of the presentation to retrieve. */
@property(nonatomic, copy, nullable) NSString *presentationId;

/**
 *  Fetches a @c GTLRSlides_Presentation.
 *
 *  Gets the latest version of the specified presentation.
 *
 *  @param presentationId The ID of the presentation to retrieve.
 *
 *  @returns GTLRSlidesQuery_PresentationsGet
 */
+ (instancetype)queryWithPresentationId:(NSString *)presentationId;

@end

/**
 *  Gets the latest version of the specified page in the presentation.
 *
 *  Method: slides.presentations.pages.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSlidesDrive
 *    @c kGTLRAuthScopeSlidesDriveReadonly
 *    @c kGTLRAuthScopeSlidesPresentations
 *    @c kGTLRAuthScopeSlidesPresentationsReadonly
 */
@interface GTLRSlidesQuery_PresentationsPagesGet : GTLRSlidesQuery
// Previous library name was
//   +[GTLQuerySlides queryForPresentationsPagesGetWithpresentationId:pageObjectId:]

/** The object ID of the page to retrieve. */
@property(nonatomic, copy, nullable) NSString *pageObjectId;

/** The ID of the presentation to retrieve. */
@property(nonatomic, copy, nullable) NSString *presentationId;

/**
 *  Fetches a @c GTLRSlides_Page.
 *
 *  Gets the latest version of the specified page in the presentation.
 *
 *  @param presentationId The ID of the presentation to retrieve.
 *  @param pageObjectId The object ID of the page to retrieve.
 *
 *  @returns GTLRSlidesQuery_PresentationsPagesGet
 */
+ (instancetype)queryWithPresentationId:(NSString *)presentationId
                           pageObjectId:(NSString *)pageObjectId;

@end

/**
 *  Generates a thumbnail of the latest version of the specified page in the
 *  presentation and returns a URL to the thumbnail image.
 *
 *  Method: slides.presentations.pages.getThumbnail
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSlidesDrive
 *    @c kGTLRAuthScopeSlidesDriveReadonly
 *    @c kGTLRAuthScopeSlidesPresentations
 *    @c kGTLRAuthScopeSlidesPresentationsReadonly
 */
@interface GTLRSlidesQuery_PresentationsPagesGetThumbnail : GTLRSlidesQuery
// Previous library name was
//   +[GTLQuerySlides queryForPresentationsPagesGetThumbnailWithpresentationId:pageObjectId:]

/** The object ID of the page whose thumbnail to retrieve. */
@property(nonatomic, copy, nullable) NSString *pageObjectId;

/** The ID of the presentation to retrieve. */
@property(nonatomic, copy, nullable) NSString *presentationId;

/**
 *  The optional mime type of the thumbnail image.
 *  If you don't specify the mime type, the default mime type will be PNG.
 *
 *  Likely values:
 *    @arg @c kGTLRSlidesThumbnailPropertiesMimeTypePng Value "PNG"
 */
@property(nonatomic, copy, nullable) NSString *thumbnailPropertiesMimeType;

/**
 *  The optional thumbnail image size.
 *  If you don't specify the size, the server chooses a default size of the
 *  image.
 *
 *  Likely values:
 *    @arg @c kGTLRSlidesThumbnailPropertiesThumbnailSizeThumbnailSizeUnspecified
 *        Value "THUMBNAIL_SIZE_UNSPECIFIED"
 *    @arg @c kGTLRSlidesThumbnailPropertiesThumbnailSizeLarge Value "LARGE"
 */
@property(nonatomic, copy, nullable) NSString *thumbnailPropertiesThumbnailSize;

/**
 *  Fetches a @c GTLRSlides_Thumbnail.
 *
 *  Generates a thumbnail of the latest version of the specified page in the
 *  presentation and returns a URL to the thumbnail image.
 *
 *  @param presentationId The ID of the presentation to retrieve.
 *  @param pageObjectId The object ID of the page whose thumbnail to retrieve.
 *
 *  @returns GTLRSlidesQuery_PresentationsPagesGetThumbnail
 */
+ (instancetype)queryWithPresentationId:(NSString *)presentationId
                           pageObjectId:(NSString *)pageObjectId;

@end

NS_ASSUME_NONNULL_END
