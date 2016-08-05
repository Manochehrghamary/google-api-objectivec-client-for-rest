// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   Executes Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRScript_ExecutionRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Script query classes.
 */
@interface GTLRScriptQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Runs a function in an Apps Script project that has been deployed for use
 *  with the Apps Script Execution API. This method requires authorization with
 *  an OAuth 2.0 token that includes at least one of the scopes listed in the
 *  [Authentication](#authentication) section; script projects that do not
 *  require authorization cannot be executed through this API. To find the
 *  correct scopes to include in the authentication token, open the project in
 *  the script editor, then select **File > Project properties** and click the
 *  **Scopes** tab.
 *
 *  Method: script.scripts.run
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptAdminDirectoryGroup
 *    @c kGTLRAuthScopeScriptAdminDirectoryUser
 *    @c kGTLRAuthScopeScriptDrive
 *    @c kGTLRAuthScopeScriptFeeds
 *    @c kGTLRAuthScopeScriptFeeds
 *    @c kGTLRAuthScopeScriptForms
 *    @c kGTLRAuthScopeScriptFormsCurrentonly
 *    @c kGTLRAuthScopeScriptGroups
 *    @c kGTLRAuthScopeScriptMailGoogleCom
 *    @c kGTLRAuthScopeScriptSpreadsheets
 *    @c kGTLRAuthScopeScriptUserinfoEmail
 */
@interface GTLRScriptQuery_ScriptsRun : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForScriptsRunWithObject:scriptId:]

/**
 *  The project key of the script to be executed. To find the project key, open
 *  the project in the script editor, then select **File > Project properties**.
 */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Operation.
 *
 *  Runs a function in an Apps Script project that has been deployed for use
 *  with the Apps Script Execution API. This method requires authorization with
 *  an OAuth 2.0 token that includes at least one of the scopes listed in the
 *  [Authentication](#authentication) section; script projects that do not
 *  require authorization cannot be executed through this API. To find the
 *  correct scopes to include in the authentication token, open the project in
 *  the script editor, then select **File > Project properties** and click the
 *  **Scopes** tab.
 *
 *  @param object The @c GTLRScript_ExecutionRequest to include in the query.
 *  @param scriptId The project key of the script to be executed. To find the
 *    project key, open the project in the script editor, then select **File >
 *    Project properties**.
 *
 *  @returns GTLRScriptQuery_ScriptsRun
 */
+ (instancetype)queryWithObject:(GTLRScript_ExecutionRequest *)object
                       scriptId:(NSString *)scriptId;

@end

NS_ASSUME_NONNULL_END
