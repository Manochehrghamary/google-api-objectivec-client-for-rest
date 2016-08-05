// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Admin Reports API (admin/reports_v1)
// Description:
//   Fetches reports for the administrators of Google Apps customers about the
//   usage, collaboration, security, and risk for their users.
// Documentation:
//   https://developers.google.com/admin-sdk/reports/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReports_Channel;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other reports query classes.
 */
@interface GTLRReportsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Retrieves a list of activities for a specific customer and application.
 *
 *  Method: reports.activities.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReportsReportsAuditReadonly
 */
@interface GTLRReportsQuery_ActivitiesList : GTLRReportsQuery
// Previous library name was
//   +[GTLQueryReports queryForActivitiesListWithuserKey:applicationName:]

/**
 *  IP Address of host where the event was performed. Supports both IPv4 and
 *  IPv6 addresses.
 */
@property(nonatomic, copy, nullable) NSString *actorIpAddress;

/** Application name for which the events are to be retrieved. */
@property(nonatomic, copy, nullable) NSString *applicationName;

/** Represents the customer for which the data is to be fetched. */
@property(nonatomic, copy, nullable) NSString *customerId;

/** Return events which occured at or before this time. */
@property(nonatomic, copy, nullable) NSString *endTime;

/** Name of the event being queried. */
@property(nonatomic, copy, nullable) NSString *eventName;

/**
 *  Event parameters in the form [parameter1 name][operator][parameter1
 *  value],[parameter2 name][operator][parameter2 value],...
 */
@property(nonatomic, copy, nullable) NSString *filters;

/**
 *  Number of activity records to be shown in each page.
 *
 *  @note The documented range is 1..1000.
 */
@property(nonatomic, assign) NSInteger maxResults;

/** Token to specify next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Return events which occured at or after this time. */
@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  Represents the profile id or the user email for which the data should be
 *  filtered. When 'all' is specified as the userKey, it returns usageReports
 *  for all users.
 */
@property(nonatomic, copy, nullable) NSString *userKey;

/**
 *  Fetches a @c GTLRReports_Activities.
 *
 *  Retrieves a list of activities for a specific customer and application.
 *
 *  @param userKey Represents the profile id or the user email for which the
 *    data should be filtered. When 'all' is specified as the userKey, it
 *    returns usageReports for all users.
 *  @param applicationName Application name for which the events are to be
 *    retrieved.
 *
 *  @returns GTLRReportsQuery_ActivitiesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithUserKey:(NSString *)userKey
                 applicationName:(NSString *)applicationName;

@end

/**
 *  Push changes to activities
 *
 *  Method: reports.activities.watch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReportsReportsAuditReadonly
 */
@interface GTLRReportsQuery_ActivitiesWatch : GTLRReportsQuery
// Previous library name was
//   +[GTLQueryReports queryForActivitiesWatchWithObject:userKey:applicationName:]

/**
 *  IP Address of host where the event was performed. Supports both IPv4 and
 *  IPv6 addresses.
 */
@property(nonatomic, copy, nullable) NSString *actorIpAddress;

/** Application name for which the events are to be retrieved. */
@property(nonatomic, copy, nullable) NSString *applicationName;

/** Represents the customer for which the data is to be fetched. */
@property(nonatomic, copy, nullable) NSString *customerId;

/** Return events which occured at or before this time. */
@property(nonatomic, copy, nullable) NSString *endTime;

/** Name of the event being queried. */
@property(nonatomic, copy, nullable) NSString *eventName;

/**
 *  Event parameters in the form [parameter1 name][operator][parameter1
 *  value],[parameter2 name][operator][parameter2 value],...
 */
@property(nonatomic, copy, nullable) NSString *filters;

/**
 *  Number of activity records to be shown in each page.
 *
 *  @note The documented range is 1..1000.
 */
@property(nonatomic, assign) NSInteger maxResults;

/** Token to specify next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Return events which occured at or after this time. */
@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  Represents the profile id or the user email for which the data should be
 *  filtered. When 'all' is specified as the userKey, it returns usageReports
 *  for all users.
 */
@property(nonatomic, copy, nullable) NSString *userKey;

/**
 *  Fetches a @c GTLRReports_Channel.
 *
 *  Push changes to activities
 *
 *  @param object The @c GTLRReports_Channel to include in the query.
 *  @param userKey Represents the profile id or the user email for which the
 *    data should be filtered. When 'all' is specified as the userKey, it
 *    returns usageReports for all users.
 *  @param applicationName Application name for which the events are to be
 *    retrieved.
 *
 *  @returns GTLRReportsQuery_ActivitiesWatch
 */
+ (instancetype)queryWithObject:(GTLRReports_Channel *)object
                        userKey:(NSString *)userKey
                applicationName:(NSString *)applicationName;

@end

/**
 *  Stop watching resources through this channel
 *
 *  Method: admin.channels.stop
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReportsReportsAuditReadonly
 */
@interface GTLRReportsQuery_ChannelsStop : GTLRReportsQuery
// Previous library name was
//   +[GTLQueryReports queryForChannelsStopWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Stop watching resources through this channel
 *
 *  @param object The @c GTLRReports_Channel to include in the query.
 *
 *  @returns GTLRReportsQuery_ChannelsStop
 */
+ (instancetype)queryWithObject:(GTLRReports_Channel *)object;

@end

/**
 *  Retrieves a report which is a collection of properties / statistics for a
 *  specific customer.
 *
 *  Method: reports.customerUsageReports.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReportsReportsUsageReadonly
 */
@interface GTLRReportsQuery_CustomerUsageReportsGet : GTLRReportsQuery
// Previous library name was
//   +[GTLQueryReports queryForCustomerUsageReportsGetWithdate:]

/** Represents the customer for which the data is to be fetched. */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Represents the date in yyyy-mm-dd format for which the data is to be
 *  fetched.
 */
@property(nonatomic, copy, nullable) NSString *date;

/** Token to specify next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Represents the application name, parameter name pairs to fetch in csv as
 *  app_name1:param_name1, app_name2:param_name2.
 */
@property(nonatomic, copy, nullable) NSString *parameters;

/**
 *  Fetches a @c GTLRReports_UsageReports.
 *
 *  Retrieves a report which is a collection of properties / statistics for a
 *  specific customer.
 *
 *  @param date Represents the date in yyyy-mm-dd format for which the data is
 *    to be fetched.
 *
 *  @returns GTLRReportsQuery_CustomerUsageReportsGet
 */
+ (instancetype)queryWithDate:(NSString *)date;

@end

/**
 *  Retrieves a report which is a collection of properties / statistics for a
 *  set of users.
 *
 *  Method: reports.userUsageReport.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReportsReportsUsageReadonly
 */
@interface GTLRReportsQuery_UserUsageReportGet : GTLRReportsQuery
// Previous library name was
//   +[GTLQueryReports queryForUserUsageReportGetWithuserKey:date:]

/** Represents the customer for which the data is to be fetched. */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Represents the date in yyyy-mm-dd format for which the data is to be
 *  fetched.
 */
@property(nonatomic, copy, nullable) NSString *date;

/** Represents the set of filters including parameter operator value. */
@property(nonatomic, copy, nullable) NSString *filters;

/** Maximum number of results to return. Maximum allowed is 1000 */
@property(nonatomic, assign) NSUInteger maxResults;

/** Token to specify next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Represents the application name, parameter name pairs to fetch in csv as
 *  app_name1:param_name1, app_name2:param_name2.
 */
@property(nonatomic, copy, nullable) NSString *parameters;

/**
 *  Represents the profile id or the user email for which the data should be
 *  filtered.
 */
@property(nonatomic, copy, nullable) NSString *userKey;

/**
 *  Fetches a @c GTLRReports_UsageReports.
 *
 *  Retrieves a report which is a collection of properties / statistics for a
 *  set of users.
 *
 *  @param userKey Represents the profile id or the user email for which the
 *    data should be filtered.
 *  @param date Represents the date in yyyy-mm-dd format for which the data is
 *    to be fetched.
 *
 *  @returns GTLRReportsQuery_UserUsageReportGet
 */
+ (instancetype)queryWithUserKey:(NSString *)userKey
                            date:(NSString *)date;

@end

NS_ASSUME_NONNULL_END
