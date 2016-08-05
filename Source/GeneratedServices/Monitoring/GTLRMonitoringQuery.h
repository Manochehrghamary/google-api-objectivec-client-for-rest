// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Monitoring API (monitoring/v3)
// Description:
//   Manages your Stackdriver monitoring data and configurations. Projects must
//   be associated with a Stackdriver account, except for the following methods:
//   [monitoredResourceDescriptors.list](v3/projects.monitoredResourceDescriptors/list),
//   [monitoredResourceDescriptors.get](v3/projects.monitoredResourceDescriptors/get),
//   [metricDescriptors.list](v3/projects.metricDescriptors/list),
//   [metricDescriptors.get](v3/projects.metricDescriptors/get), and
//   [timeSeries.list](v3/projects.timeSeries/list).
// Documentation:
//   https://cloud.google.com/monitoring/api/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRMonitoring_CreateCollectdTimeSeriesRequest;
@class GTLRMonitoring_CreateTimeSeriesRequest;
@class GTLRMonitoring_Group;
@class GTLRMonitoring_MetricDescriptor;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// aggregationCrossSeriesReducer

/** Value: "REDUCE_COUNT" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceCount;
/** Value: "REDUCE_COUNT_TRUE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceCountTrue;
/** Value: "REDUCE_FRACTION_TRUE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceFractionTrue;
/** Value: "REDUCE_MAX" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceMax;
/** Value: "REDUCE_MEAN" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceMean;
/** Value: "REDUCE_MIN" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceMin;
/** Value: "REDUCE_NONE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceNone;
/** Value: "REDUCE_PERCENTILE_05" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile05;
/** Value: "REDUCE_PERCENTILE_50" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile50;
/** Value: "REDUCE_PERCENTILE_95" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile95;
/** Value: "REDUCE_PERCENTILE_99" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile99;
/** Value: "REDUCE_STDDEV" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceStddev;
/** Value: "REDUCE_SUM" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationCrossSeriesReducerReduceSum;

// ----------------------------------------------------------------------------
// aggregationPerSeriesAligner

/** Value: "ALIGN_COUNT" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignCount;
/** Value: "ALIGN_COUNT_TRUE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignCountTrue;
/** Value: "ALIGN_DELTA" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignDelta;
/** Value: "ALIGN_FRACTION_TRUE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignFractionTrue;
/** Value: "ALIGN_INTERPOLATE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignInterpolate;
/** Value: "ALIGN_MAX" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignMax;
/** Value: "ALIGN_MEAN" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignMean;
/** Value: "ALIGN_MIN" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignMin;
/** Value: "ALIGN_NEXT_OLDER" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignNextOlder;
/** Value: "ALIGN_NONE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignNone;
/** Value: "ALIGN_RATE" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignRate;
/** Value: "ALIGN_STDDEV" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignStddev;
/** Value: "ALIGN_SUM" */
GTLR_EXTERN NSString * const kGTLRMonitoringAggregationPerSeriesAlignerAlignSum;

// ----------------------------------------------------------------------------
// view

/** Value: "FULL" */
GTLR_EXTERN NSString * const kGTLRMonitoringViewFull;
/** Value: "HEADERS" */
GTLR_EXTERN NSString * const kGTLRMonitoringViewHeaders;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Monitoring query classes.
 */
@interface GTLRMonitoringQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a new time series with the given data points. This method is only
 *  for use in `collectd`-related code, including the Google Monitoring Agent.
 *  See [google.monitoring.v3.MetricService.CreateTimeSeries] instead.
 *
 *  Method: monitoring.projects.collectdTimeSeries.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsCollectdTimeSeriesCreate : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsCollectdTimeSeriesCreateWithObject:name:]

/**
 *  The project in which to create the time series. The format is
 *  `"projects/PROJECT_ID_OR_NUMBER"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_Empty.
 *
 *  Creates a new time series with the given data points. This method is only
 *  for use in `collectd`-related code, including the Google Monitoring Agent.
 *  See [google.monitoring.v3.MetricService.CreateTimeSeries] instead.
 *
 *  @param object The @c GTLRMonitoring_CreateCollectdTimeSeriesRequest to
 *    include in the query.
 *  @param name The project in which to create the time series. The format is
 *    `"projects/PROJECT_ID_OR_NUMBER"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsCollectdTimeSeriesCreate
 */
+ (instancetype)queryWithObject:(GTLRMonitoring_CreateCollectdTimeSeriesRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a new group.
 *
 *  Method: monitoring.projects.groups.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 */
@interface GTLRMonitoringQuery_ProjectsGroupsCreate : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsCreateWithObject:name:]

/**
 *  The project in which to create the group. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** If true, validate this request but do not create the group. */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRMonitoring_Group.
 *
 *  Creates a new group.
 *
 *  @param object The @c GTLRMonitoring_Group to include in the query.
 *  @param name The project in which to create the group. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsCreate
 */
+ (instancetype)queryWithObject:(GTLRMonitoring_Group *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes an existing group.
 *
 *  Method: monitoring.projects.groups.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 */
@interface GTLRMonitoringQuery_ProjectsGroupsDelete : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsDeleteWithname:]

/**
 *  The group to delete. The format is
 *  `"projects/{project_id_or_number}/groups/{group_id}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_Empty.
 *
 *  Deletes an existing group.
 *
 *  @param name The group to delete. The format is
 *    `"projects/{project_id_or_number}/groups/{group_id}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a single group.
 *
 *  Method: monitoring.projects.groups.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 */
@interface GTLRMonitoringQuery_ProjectsGroupsGet : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsGetWithname:]

/**
 *  The group to retrieve. The format is
 *  `"projects/{project_id_or_number}/groups/{group_id}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_Group.
 *
 *  Gets a single group.
 *
 *  @param name The group to retrieve. The format is
 *    `"projects/{project_id_or_number}/groups/{group_id}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the existing groups.
 *
 *  Method: monitoring.projects.groups.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 */
@interface GTLRMonitoringQuery_ProjectsGroupsList : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsListWithname:]

/**
 *  A group name: `"projects/{project_id_or_number}/groups/{group_id}"`. Returns
 *  groups that are ancestors of the specified group. The groups are returned in
 *  order, starting with the immediate parent and ending with the most distant
 *  ancestor. If the specified group has no immediate parent, the results are
 *  empty.
 */
@property(nonatomic, copy, nullable) NSString *ancestorsOfGroup;

/**
 *  A group name: `"projects/{project_id_or_number}/groups/{group_id}"`. Returns
 *  groups whose `parentName` field contains the group name. If no groups have
 *  this parent, the results are empty.
 */
@property(nonatomic, copy, nullable) NSString *childrenOfGroup;

/**
 *  A group name: `"projects/{project_id_or_number}/groups/{group_id}"`. Returns
 *  the descendants of the specified group. This is a superset of the results
 *  returned by the `childrenOfGroup` filter, and includes children-of-children,
 *  and so forth.
 */
@property(nonatomic, copy, nullable) NSString *descendantsOfGroup;

/**
 *  The project whose groups are to be listed. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** A positive number that is the maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If this field is not empty then it must contain the `nextPageToken` value
 *  returned by a previous call to this method. Using this field causes the
 *  method to return additional results from the previous method call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRMonitoring_ListGroupsResponse.
 *
 *  Lists the existing groups.
 *
 *  @param name The project whose groups are to be listed. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the monitored resources that are members of a group.
 *
 *  Method: monitoring.projects.groups.members.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 */
@interface GTLRMonitoringQuery_ProjectsGroupsMembersList : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsMembersListWithname:]

/**
 *  An optional [list filter](/monitoring/api/learn_more#filtering) describing
 *  the members to be returned. The filter may reference the type, labels, and
 *  metadata of monitored resources that comprise the group. For example, to
 *  return only resources representing Compute Engine VM instances, use this
 *  filter: resource.type = "gce_instance"
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Required. The end of the interval. The interval includes this time. */
@property(nonatomic, copy, nullable) NSString *intervalEndTime;

/**
 *  If this value is omitted, the interval is a point in time, `endTime`. If
 *  `startTime` is present, it must be earlier than (less than) `endTime`. The
 *  interval begins after `startTime`—it does not include `startTime`.
 */
@property(nonatomic, copy, nullable) NSString *intervalStartTime;

/**
 *  The group whose members are listed. The format is
 *  `"projects/{project_id_or_number}/groups/{group_id}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** A positive number that is the maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If this field is not empty then it must contain the `nextPageToken` value
 *  returned by a previous call to this method. Using this field causes the
 *  method to return additional results from the previous method call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRMonitoring_ListGroupMembersResponse.
 *
 *  Lists the monitored resources that are members of a group.
 *
 *  @param name The group whose members are listed. The format is
 *    `"projects/{project_id_or_number}/groups/{group_id}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsMembersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates an existing group. You can change any group attributes except
 *  `name`.
 *
 *  Method: monitoring.projects.groups.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 */
@interface GTLRMonitoringQuery_ProjectsGroupsUpdate : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsGroupsUpdateWithObject:name:]

/**
 *  The name of this group. The format is
 *  `"projects/{project_id_or_number}/groups/{group_id}"`. When creating a
 *  group, this field is ignored and a new name is created consisting of the
 *  project specified in the call to `CreateGroup` and a unique `{group_id}`
 *  that is generated automatically. \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *name;

/** If true, validate this request but do not update the existing group. */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRMonitoring_Group.
 *
 *  Updates an existing group. You can change any group attributes except
 *  `name`.
 *
 *  @param object The @c GTLRMonitoring_Group to include in the query.
 *  @param name The name of this group. The format is
 *    `"projects/{project_id_or_number}/groups/{group_id}"`. When creating a
 *    group, this field is ignored and a new name is created consisting of the
 *    project specified in the call to `CreateGroup` and a unique `{group_id}`
 *    that is generated automatically. \@OutputOnly
 *
 *  @returns GTLRMonitoringQuery_ProjectsGroupsUpdate
 */
+ (instancetype)queryWithObject:(GTLRMonitoring_Group *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a new metric descriptor. User-created metric descriptors define
 *  [custom metrics](/monitoring/custom-metrics).
 *
 *  Method: monitoring.projects.metricDescriptors.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsMetricDescriptorsCreate : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMetricDescriptorsCreateWithObject:name:]

/**
 *  The project on which to execute the request. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_MetricDescriptor.
 *
 *  Creates a new metric descriptor. User-created metric descriptors define
 *  [custom metrics](/monitoring/custom-metrics).
 *
 *  @param object The @c GTLRMonitoring_MetricDescriptor to include in the
 *    query.
 *  @param name The project on which to execute the request. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMetricDescriptorsCreate
 */
+ (instancetype)queryWithObject:(GTLRMonitoring_MetricDescriptor *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a metric descriptor. Only user-created [custom
 *  metrics](/monitoring/custom-metrics) can be deleted.
 *
 *  Method: monitoring.projects.metricDescriptors.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 */
@interface GTLRMonitoringQuery_ProjectsMetricDescriptorsDelete : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMetricDescriptorsDeleteWithname:]

/**
 *  The metric descriptor on which to execute the request. The format is
 *  `"projects/{project_id_or_number}/metricDescriptors/{metric_id}"`. An
 *  example of `{metric_id}` is: `"custom.googleapis.com/my_test_metric"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_Empty.
 *
 *  Deletes a metric descriptor. Only user-created [custom
 *  metrics](/monitoring/custom-metrics) can be deleted.
 *
 *  @param name The metric descriptor on which to execute the request. The
 *    format is
 *    `"projects/{project_id_or_number}/metricDescriptors/{metric_id}"`. An
 *    example of `{metric_id}` is: `"custom.googleapis.com/my_test_metric"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMetricDescriptorsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a single metric descriptor. This method does not require a Stackdriver
 *  account.
 *
 *  Method: monitoring.projects.metricDescriptors.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsMetricDescriptorsGet : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMetricDescriptorsGetWithname:]

/**
 *  The metric descriptor on which to execute the request. The format is
 *  `"projects/{project_id_or_number}/metricDescriptors/{metric_id}"`. An
 *  example value of `{metric_id}` is
 *  `"compute.googleapis.com/instance/disk/read_bytes_count"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_MetricDescriptor.
 *
 *  Gets a single metric descriptor. This method does not require a Stackdriver
 *  account.
 *
 *  @param name The metric descriptor on which to execute the request. The
 *    format is
 *    `"projects/{project_id_or_number}/metricDescriptors/{metric_id}"`. An
 *    example value of `{metric_id}` is
 *    `"compute.googleapis.com/instance/disk/read_bytes_count"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMetricDescriptorsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists metric descriptors that match a filter. This method does not require a
 *  Stackdriver account.
 *
 *  Method: monitoring.projects.metricDescriptors.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsMetricDescriptorsList : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMetricDescriptorsListWithname:]

/**
 *  If this field is empty, all custom and system-defined metric descriptors are
 *  returned. Otherwise, the [filter](/monitoring/api/v3/filters) specifies
 *  which metric descriptors are to be returned. For example, the following
 *  filter matches all [custom metrics](/monitoring/custom-metrics): metric.type
 *  = starts_with("custom.googleapis.com/")
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The project on which to execute the request. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** A positive number that is the maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If this field is not empty then it must contain the `nextPageToken` value
 *  returned by a previous call to this method. Using this field causes the
 *  method to return additional results from the previous method call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRMonitoring_ListMetricDescriptorsResponse.
 *
 *  Lists metric descriptors that match a filter. This method does not require a
 *  Stackdriver account.
 *
 *  @param name The project on which to execute the request. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMetricDescriptorsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a single monitored resource descriptor. This method does not require a
 *  Stackdriver account.
 *
 *  Method: monitoring.projects.monitoredResourceDescriptors.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsMonitoredResourceDescriptorsGet : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMonitoredResourceDescriptorsGetWithname:]

/**
 *  The monitored resource descriptor to get. The format is
 *  `"projects/{project_id_or_number}/monitoredResourceDescriptors/{resource_type}"`.
 *  The `{resource_type}` is a predefined type, such as `cloudsql_database`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_MonitoredResourceDescriptor.
 *
 *  Gets a single monitored resource descriptor. This method does not require a
 *  Stackdriver account.
 *
 *  @param name The monitored resource descriptor to get. The format is
 *    `"projects/{project_id_or_number}/monitoredResourceDescriptors/{resource_type}"`.
 *    The `{resource_type}` is a predefined type, such as `cloudsql_database`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMonitoredResourceDescriptorsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists monitored resource descriptors that match a filter. This method does
 *  not require a Stackdriver account.
 *
 *  Method: monitoring.projects.monitoredResourceDescriptors.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsMonitoredResourceDescriptorsList : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsMonitoredResourceDescriptorsListWithname:]

/**
 *  An optional [filter](/monitoring/api/v3/filters) describing the descriptors
 *  to be returned. The filter can reference the descriptor's type and labels.
 *  For example, the following filter returns only Google Compute Engine
 *  descriptors that have an `id` label: resource.type = starts_with("gce_") AND
 *  resource.label:id
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The project on which to execute the request. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** A positive number that is the maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If this field is not empty then it must contain the `nextPageToken` value
 *  returned by a previous call to this method. Using this field causes the
 *  method to return additional results from the previous method call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRMonitoring_ListMonitoredResourceDescriptorsResponse.
 *
 *  Lists monitored resource descriptors that match a filter. This method does
 *  not require a Stackdriver account.
 *
 *  @param name The project on which to execute the request. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsMonitoredResourceDescriptorsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates or adds data to one or more time series. The response is empty if
 *  all time series in the request were written. If any time series could not be
 *  written, a corresponding failure message is included in the error response.
 *
 *  Method: monitoring.projects.timeSeries.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringWrite
 */
@interface GTLRMonitoringQuery_ProjectsTimeSeriesCreate : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsTimeSeriesCreateWithObject:name:]

/**
 *  The project on which to execute the request. The format is
 *  `"projects/{project_id_or_number}"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMonitoring_Empty.
 *
 *  Creates or adds data to one or more time series. The response is empty if
 *  all time series in the request were written. If any time series could not be
 *  written, a corresponding failure message is included in the error response.
 *
 *  @param object The @c GTLRMonitoring_CreateTimeSeriesRequest to include in
 *    the query.
 *  @param name The project on which to execute the request. The format is
 *    `"projects/{project_id_or_number}"`.
 *
 *  @returns GTLRMonitoringQuery_ProjectsTimeSeriesCreate
 */
+ (instancetype)queryWithObject:(GTLRMonitoring_CreateTimeSeriesRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Lists time series that match a filter. This method does not require a
 *  Stackdriver account.
 *
 *  Method: monitoring.projects.timeSeries.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMonitoring
 *    @c kGTLRAuthScopeMonitoringCloudPlatform
 *    @c kGTLRAuthScopeMonitoringRead
 */
@interface GTLRMonitoringQuery_ProjectsTimeSeriesList : GTLRMonitoringQuery
// Previous library name was
//   +[GTLQueryMonitoring queryForProjectsTimeSeriesListWithname:]

/**
 *  The alignment period for per-[time series](TimeSeries) alignment. If
 *  present, `alignmentPeriod` must be at least 60 seconds. After per-time
 *  series alignment, each time series will contain data points only on the
 *  period boundaries. If `perSeriesAligner` is not specified or equals
 *  `ALIGN_NONE`, then this field is ignored. If `perSeriesAligner` is specified
 *  and does not equal `ALIGN_NONE`, then this field must be defined; otherwise
 *  an error is returned.
 */
@property(nonatomic, copy, nullable) NSString *aggregationAlignmentPeriod;

/**
 *  The approach to be used to combine time series. Not all reducer functions
 *  may be applied to all time series, depending on the metric type and the
 *  value type of the original time series. Reduction may change the metric type
 *  of value type of the time series. Time series data must be aligned in order
 *  to perform cross-time series reduction. If `crossSeriesReducer` is
 *  specified, then `perSeriesAligner` must be specified and not equal
 *  `ALIGN_NONE` and `alignmentPeriod` must be specified; otherwise, an error is
 *  returned.
 *
 *  Likely values:
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceNone Value
 *        "REDUCE_NONE"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceMean Value
 *        "REDUCE_MEAN"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceMin Value
 *        "REDUCE_MIN"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceMax Value
 *        "REDUCE_MAX"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceSum Value
 *        "REDUCE_SUM"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceStddev Value
 *        "REDUCE_STDDEV"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceCount Value
 *        "REDUCE_COUNT"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceCountTrue Value
 *        "REDUCE_COUNT_TRUE"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReduceFractionTrue
 *        Value "REDUCE_FRACTION_TRUE"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile99
 *        Value "REDUCE_PERCENTILE_99"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile95
 *        Value "REDUCE_PERCENTILE_95"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile50
 *        Value "REDUCE_PERCENTILE_50"
 *    @arg @c kGTLRMonitoringAggregationCrossSeriesReducerReducePercentile05
 *        Value "REDUCE_PERCENTILE_05"
 */
@property(nonatomic, copy, nullable) NSString *aggregationCrossSeriesReducer;

/**
 *  The set of fields to preserve when `crossSeriesReducer` is specified. The
 *  `groupByFields` determine how the time series are partitioned into subsets
 *  prior to applying the aggregation function. Each subset contains time series
 *  that have the same value for each of the grouping fields. Each individual
 *  time series is a member of exactly one subset. The `crossSeriesReducer` is
 *  applied to each subset of time series. Fields not specified in
 *  `groupByFields` are aggregated away. If `groupByFields` is not specified,
 *  the time series are aggregated into a single output time series. If
 *  `crossSeriesReducer` is not defined, this field is ignored.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *aggregationGroupByFields;

/**
 *  The approach to be used to align individual time series. Not all alignment
 *  functions may be applied to all time series, depending on the metric type
 *  and value type of the original time series. Alignment may change the metric
 *  type or the value type of the time series. Time series data must be aligned
 *  in order to perform cross-time series reduction. If `crossSeriesReducer` is
 *  specified, then `perSeriesAligner` must be specified and not equal
 *  `ALIGN_NONE` and `alignmentPeriod` must be specified; otherwise, an error is
 *  returned.
 *
 *  Likely values:
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignNone Value
 *        "ALIGN_NONE"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignDelta Value
 *        "ALIGN_DELTA"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignRate Value
 *        "ALIGN_RATE"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignInterpolate Value
 *        "ALIGN_INTERPOLATE"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignNextOlder Value
 *        "ALIGN_NEXT_OLDER"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignMin Value
 *        "ALIGN_MIN"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignMax Value
 *        "ALIGN_MAX"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignMean Value
 *        "ALIGN_MEAN"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignCount Value
 *        "ALIGN_COUNT"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignSum Value
 *        "ALIGN_SUM"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignStddev Value
 *        "ALIGN_STDDEV"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignCountTrue Value
 *        "ALIGN_COUNT_TRUE"
 *    @arg @c kGTLRMonitoringAggregationPerSeriesAlignerAlignFractionTrue Value
 *        "ALIGN_FRACTION_TRUE"
 */
@property(nonatomic, copy, nullable) NSString *aggregationPerSeriesAligner;

/**
 *  A [monitoring filter](/monitoring/api/v3/filters) that specifies which time
 *  series should be returned. The filter must specify a single metric type, and
 *  can additionally specify metric labels and other information. For example:
 *  metric.type = "compute.googleapis.com/instance/cpu/usage_time" AND
 *  metric.label.instance_name = "my-instance-name"
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Required. The end of the interval. The interval includes this time. */
@property(nonatomic, copy, nullable) NSString *intervalEndTime;

/**
 *  If this value is omitted, the interval is a point in time, `endTime`. If
 *  `startTime` is present, it must be earlier than (less than) `endTime`. The
 *  interval begins after `startTime`—it does not include `startTime`.
 */
@property(nonatomic, copy, nullable) NSString *intervalStartTime;

/**
 *  The project on which to execute the request. The format is
 *  "projects/{project_id_or_number}".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Specifies the order in which the points of the time series should be
 *  returned. By default, results are not ordered. Currently, this field must be
 *  left blank.
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  A positive number that is the maximum number of results to return. When
 *  `view` field sets to `FULL`, it limits the number of `Points` server will
 *  return; if `view` field is `HEADERS`, it limits the number of `TimeSeries`
 *  server will return.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If this field is not empty then it must contain the `nextPageToken` value
 *  returned by a previous call to this method. Using this field causes the
 *  method to return additional results from the previous method call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Specifies which information is returned about the time series.
 *
 *  Likely values:
 *    @arg @c kGTLRMonitoringViewFull Value "FULL"
 *    @arg @c kGTLRMonitoringViewHeaders Value "HEADERS"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRMonitoring_ListTimeSeriesResponse.
 *
 *  Lists time series that match a filter. This method does not require a
 *  Stackdriver account.
 *
 *  @param name The project on which to execute the request. The format is
 *    "projects/{project_id_or_number}".
 *
 *  @returns GTLRMonitoringQuery_ProjectsTimeSeriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
