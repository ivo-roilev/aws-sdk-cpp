/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudformation/model/CreateStackResult.h>
#include <aws/cloudformation/model/DescribeAccountLimitsResult.h>
#include <aws/cloudformation/model/DescribeStackEventsResult.h>
#include <aws/cloudformation/model/DescribeStackResourceResult.h>
#include <aws/cloudformation/model/DescribeStackResourcesResult.h>
#include <aws/cloudformation/model/DescribeStacksResult.h>
#include <aws/cloudformation/model/EstimateTemplateCostResult.h>
#include <aws/cloudformation/model/GetStackPolicyResult.h>
#include <aws/cloudformation/model/GetTemplateResult.h>
#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
#include <aws/cloudformation/model/ListStackResourcesResult.h>
#include <aws/cloudformation/model/ListStacksResult.h>
#include <aws/cloudformation/model/UpdateStackResult.h>
#include <aws/cloudformation/model/ValidateTemplateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CloudFormation
{

namespace Model
{
        class CancelUpdateStackRequest;
        class CreateStackRequest;
        class DeleteStackRequest;
        class DescribeAccountLimitsRequest;
        class DescribeStackEventsRequest;
        class DescribeStackResourceRequest;
        class DescribeStackResourcesRequest;
        class DescribeStacksRequest;
        class EstimateTemplateCostRequest;
        class GetStackPolicyRequest;
        class GetTemplateRequest;
        class GetTemplateSummaryRequest;
        class ListStackResourcesRequest;
        class ListStacksRequest;
        class SetStackPolicyRequest;
        class SignalResourceRequest;
        class UpdateStackRequest;
        class ValidateTemplateRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFormationErrors>> CancelUpdateStackOutcome;
        typedef Aws::Utils::Outcome<CreateStackResult, Aws::Client::AWSError<CloudFormationErrors>> CreateStackOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFormationErrors>> DeleteStackOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeStackEventsResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeStackResourceResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeStackResourcesResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackResourcesOutcome;
        typedef Aws::Utils::Outcome<DescribeStacksResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStacksOutcome;
        typedef Aws::Utils::Outcome<EstimateTemplateCostResult, Aws::Client::AWSError<CloudFormationErrors>> EstimateTemplateCostOutcome;
        typedef Aws::Utils::Outcome<GetStackPolicyResult, Aws::Client::AWSError<CloudFormationErrors>> GetStackPolicyOutcome;
        typedef Aws::Utils::Outcome<GetTemplateResult, Aws::Client::AWSError<CloudFormationErrors>> GetTemplateOutcome;
        typedef Aws::Utils::Outcome<GetTemplateSummaryResult, Aws::Client::AWSError<CloudFormationErrors>> GetTemplateSummaryOutcome;
        typedef Aws::Utils::Outcome<ListStackResourcesResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackResourcesOutcome;
        typedef Aws::Utils::Outcome<ListStacksResult, Aws::Client::AWSError<CloudFormationErrors>> ListStacksOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFormationErrors>> SetStackPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFormationErrors>> SignalResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateStackResult, Aws::Client::AWSError<CloudFormationErrors>> UpdateStackOutcome;
        typedef Aws::Utils::Outcome<ValidateTemplateResult, Aws::Client::AWSError<CloudFormationErrors>> ValidateTemplateOutcome;

        typedef std::future<CancelUpdateStackOutcome> CancelUpdateStackOutcomeCallable;
        typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
        typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeStackEventsOutcome> DescribeStackEventsOutcomeCallable;
        typedef std::future<DescribeStackResourceOutcome> DescribeStackResourceOutcomeCallable;
        typedef std::future<DescribeStackResourcesOutcome> DescribeStackResourcesOutcomeCallable;
        typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
        typedef std::future<EstimateTemplateCostOutcome> EstimateTemplateCostOutcomeCallable;
        typedef std::future<GetStackPolicyOutcome> GetStackPolicyOutcomeCallable;
        typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
        typedef std::future<GetTemplateSummaryOutcome> GetTemplateSummaryOutcomeCallable;
        typedef std::future<ListStackResourcesOutcome> ListStackResourcesOutcomeCallable;
        typedef std::future<ListStacksOutcome> ListStacksOutcomeCallable;
        typedef std::future<SetStackPolicyOutcome> SetStackPolicyOutcomeCallable;
        typedef std::future<SignalResourceOutcome> SignalResourceOutcomeCallable;
        typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
        typedef std::future<ValidateTemplateOutcome> ValidateTemplateOutcomeCallable;
} // namespace Model

  class CloudFormationClient;

    typedef std::function<void(const CloudFormationClient*, const Model::CancelUpdateStackRequest&, const Model::CancelUpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelUpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackEventsRequest&, const Model::DescribeStackEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackEventsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourceRequest&, const Model::DescribeStackResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourcesRequest&, const Model::DescribeStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::EstimateTemplateCostRequest&, const Model::EstimateTemplateCostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EstimateTemplateCostResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetStackPolicyRequest&, const Model::GetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateSummaryRequest&, const Model::GetTemplateSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateSummaryResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackResourcesRequest&, const Model::ListStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStacksRequest&, const Model::ListStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SetStackPolicyRequest&, const Model::SetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SignalResourceRequest&, const Model::SignalResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignalResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ValidateTemplateRequest&, const Model::ValidateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateTemplateResponseReceivedHandler;

  /**
   * <fullname>AWS CloudFormation</fullname> <p>AWS CloudFormation enables you to
   * create and manage AWS infrastructure deployments predictably and repeatedly. AWS
   * CloudFormation helps you leverage AWS products such as Amazon EC2, EBS, Amazon
   * SNS, ELB, and Auto Scaling to build highly-reliable, highly scalable, cost
   * effective applications without worrying about creating and configuring the
   * underlying AWS infrastructure.</p> <p>With AWS CloudFormation, you declare all
   * of your resources and dependencies in a template file. The template defines a
   * collection of resources as a single unit called a stack. AWS CloudFormation
   * creates and deletes all member resources of the stack together and manages all
   * dependencies between the resources for you.</p> <p>For more information about
   * this product, go to the <a
   * href="http://aws.amazon.com/cloudformation/">CloudFormation Product
   * Page</a>.</p> <p>Amazon CloudFormation makes use of other AWS products. If you
   * need additional technical information about a specific AWS product, you can find
   * the product's technical documentation at <a
   * href="http://aws.amazon.com/documentation/">http://aws.amazon.com/documentation/</a>.</p>
   */
  class AWS_CLOUDFORMATION_API CloudFormationClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFormationClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        virtual ~CloudFormationClient();

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack will roll back the update and revert to the previous stack
         * configuration.</p> <note>Only stacks that are in the UPDATE_IN_PROGRESS state
         * can be canceled.</note>
         */
        virtual Model::CancelUpdateStackOutcome CancelUpdateStack(const Model::CancelUpdateStackRequest& request) const;

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack will roll back the update and revert to the previous stack
         * configuration.</p> <note>Only stacks that are in the UPDATE_IN_PROGRESS state
         * can be canceled.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelUpdateStackOutcomeCallable CancelUpdateStackCallable(const Model::CancelUpdateStackRequest& request) const;

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack will roll back the update and revert to the previous stack
         * configuration.</p> <note>Only stacks that are in the UPDATE_IN_PROGRESS state
         * can be canceled.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelUpdateStackAsync(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all stack related events for a specified stack. For more information
         * about a stack's event history, go to <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note>You can list events for stacks
         * that have failed to create or have been deleted by specifying the unique stack
         * identifier (stack ID).</note>
         */
        virtual Model::DescribeStackEventsOutcome DescribeStackEvents(const Model::DescribeStackEventsRequest& request) const;

        /**
         * <p>Returns all stack related events for a specified stack. For more information
         * about a stack's event history, go to <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note>You can list events for stacks
         * that have failed to create or have been deleted by specifying the unique stack
         * identifier (stack ID).</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackEventsOutcomeCallable DescribeStackEventsCallable(const Model::DescribeStackEventsRequest& request) const;

        /**
         * <p>Returns all stack related events for a specified stack. For more information
         * about a stack's event history, go to <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note>You can list events for stacks
         * that have failed to create or have been deleted by specifying the unique stack
         * identifier (stack ID).</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackEventsAsync(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p>
         */
        virtual Model::DescribeStackResourceOutcome DescribeStackResource(const Model::DescribeStackResourceRequest& request) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourceOutcomeCallable DescribeStackResourceCallable(const Model::DescribeStackResourceRequest& request) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourceAsync(const Model::DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code>
         * instead.</note> <p>For deleted stacks, <code>DescribeStackResources</code>
         * returns resource information for up to 90 days after the stack has been
         * deleted.</p> <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide">AWS
         * CloudFormation User Guide</a>.</p> <note>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</note>
         */
        virtual Model::DescribeStackResourcesOutcome DescribeStackResources(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code>
         * instead.</note> <p>For deleted stacks, <code>DescribeStackResources</code>
         * returns resource information for up to 90 days after the stack has been
         * deleted.</p> <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide">AWS
         * CloudFormation User Guide</a>.</p> <note>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourcesOutcomeCallable DescribeStackResourcesCallable(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code>
         * instead.</note> <p>For deleted stacks, <code>DescribeStackResources</code>
         * returns resource information for up to 90 days after the stack has been
         * deleted.</p> <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide">AWS
         * CloudFormation User Guide</a>.</p> <note>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourcesAsync(const Model::DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p>
         */
        virtual Model::EstimateTemplateCostOutcome EstimateTemplateCost(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EstimateTemplateCostOutcomeCallable EstimateTemplateCostCallable(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EstimateTemplateCostAsync(const Model::EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p>
         */
        virtual Model::GetStackPolicyOutcome GetStackPolicy(const Model::GetStackPolicyRequest& request) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStackPolicyOutcomeCallable GetStackPolicyCallable(const Model::GetStackPolicyRequest& request) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStackPolicyAsync(const Model::GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> If the
         * template does not exist, a <code>ValidationError</code> is returned. </note>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> If the
         * template does not exist, a <code>ValidationError</code> is returned. </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> If the
         * template does not exist, a <code>ValidationError</code> is returned. </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack.</p> <p>You can use the <code>GetTemplateSummary</code>
         * action when you submit a template, or you can get template information for a
         * running or deleted stack.</p> <p>For deleted stacks,
         * <code>GetTemplateSummary</code> returns the template information for up to 90
         * days after the stack has been deleted. If the template does not exist, a
         * <code>ValidationError</code> is returned.</p>
         */
        virtual Model::GetTemplateSummaryOutcome GetTemplateSummary(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack.</p> <p>You can use the <code>GetTemplateSummary</code>
         * action when you submit a template, or you can get template information for a
         * running or deleted stack.</p> <p>For deleted stacks,
         * <code>GetTemplateSummary</code> returns the template information for up to 90
         * days after the stack has been deleted. If the template does not exist, a
         * <code>ValidationError</code> is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateSummaryOutcomeCallable GetTemplateSummaryCallable(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack.</p> <p>You can use the <code>GetTemplateSummary</code>
         * action when you submit a template, or you can get template information for a
         * running or deleted stack.</p> <p>For deleted stacks,
         * <code>GetTemplateSummary</code> returns the template information for up to 90
         * days after the stack has been deleted. If the template does not exist, a
         * <code>ValidationError</code> is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateSummaryAsync(const Model::GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p>
         */
        virtual Model::ListStackResourcesOutcome ListStackResources(const Model::ListStackResourcesRequest& request) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackResourcesOutcomeCallable ListStackResourcesCallable(const Model::ListStackResourcesRequest& request) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackResourcesAsync(const Model::ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p>
         */
        virtual Model::ListStacksOutcome ListStacks(const Model::ListStacksRequest& request) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStacksOutcomeCallable ListStacksCallable(const Model::ListStacksRequest& request) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStacksAsync(const Model::ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p>
         */
        virtual Model::SetStackPolicyOutcome SetStackPolicy(const Model::SetStackPolicyRequest& request) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetStackPolicyOutcomeCallable SetStackPolicyCallable(const Model::SetStackPolicyRequest& request) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetStackPolicyAsync(const Model::SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p>
         */
        virtual Model::SignalResourceOutcome SignalResource(const Model::SignalResourceRequest& request) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignalResourceOutcomeCallable SignalResourceCallable(const Model::SignalResourceRequest& request) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignalResourceAsync(const Model::SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>Tags that were
         * associated with this stack during creation time will still be associated with
         * the stack after an <code>UpdateStack</code> operation.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>Tags that were
         * associated with this stack during creation time will still be associated with
         * the stack after an <code>UpdateStack</code> operation.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>Tags that were
         * associated with this stack during creation time will still be associated with
         * the stack after an <code>UpdateStack</code> operation.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates a specified template.</p>
         */
        virtual Model::ValidateTemplateOutcome ValidateTemplate(const Model::ValidateTemplateRequest& request) const;

        /**
         * <p>Validates a specified template.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateTemplateOutcomeCallable ValidateTemplateCallable(const Model::ValidateTemplateRequest& request) const;

        /**
         * <p>Validates a specified template.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateTemplateAsync(const Model::ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CancelUpdateStackAsyncHelper(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackAsyncHelper(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackAsyncHelper(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackEventsAsyncHelper(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackResourceAsyncHelper(const Model::DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackResourcesAsyncHelper(const Model::DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStacksAsyncHelper(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EstimateTemplateCostAsyncHelper(const Model::EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStackPolicyAsyncHelper(const Model::GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTemplateAsyncHelper(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTemplateSummaryAsyncHelper(const Model::GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackResourcesAsyncHelper(const Model::ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStacksAsyncHelper(const Model::ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetStackPolicyAsyncHelper(const Model::SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignalResourceAsyncHelper(const Model::SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackAsyncHelper(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateTemplateAsyncHelper(const Model::ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFormation
} // namespace Aws
