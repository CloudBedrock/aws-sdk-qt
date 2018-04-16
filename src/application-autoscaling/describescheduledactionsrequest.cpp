/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describescheduledactionsrequest.h"
#include "describescheduledactionsrequest_p.h"
#include "describescheduledactionsresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::DescribeScheduledActionsRequest
 *
 * \brief The DescribeScheduledActionsRequest class encapsulates ApplicationAutoScaling DescribeScheduledActions requests.
 *
 * \ingroup ApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for your scalable AWS resources. You can use
 *  Application Auto Scaling to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Define scaling policies to automatically scale your AWS
 * 
 *  resource> </li> <li>
 * 
 *  Scale your resources in response to CloudWatch
 * 
 *  alarm> </li> <li>
 * 
 *  Schedule one-time or recurring scaling
 * 
 *  action> </li> <li>
 * 
 *  View the history of your scaling
 * 
 *  event> </li> </ul>
 * 
 *  Application Auto Scaling can scale the following AWS
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon ECS services. For more information, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service Auto Scaling</a> in
 *  the <i>Amazon Elastic Container Service Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EC2 Spot fleets. For more information, see <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-auto-scaling.html">Automatic Scaling for Spot Fleet</a>
 *  in the <i>Amazon EC2 User
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EMR clusters. For more information, see <a
 *  href="http://docs.aws.amazon.com/ElasticMapReduce/latest/ManagementGuide/emr-automatic-scaling.html">Using Automatic
 *  Scaling in Amazon EMR</a> in the <i>Amazon EMR Management
 * 
 *  Guide</i>> </li> <li>
 * 
 *  AppStream 2.0 fleets. For more information, see <a
 *  href="http://docs.aws.amazon.com/appstream2/latest/developerguide/autoscaling.html">Fleet Auto Scaling for Amazon
 *  AppStream 2.0</a> in the <i>Amazon AppStream 2.0 Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Provisioned read and write capacity for Amazon DynamoDB tables and global secondary indexes. For more information, see
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/AutoScaling.html">Managing Throughput Capacity
 *  Automatically with DynamoDB Auto Scaling</a> in the <i>Amazon DynamoDB Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon Aurora Replicas. For more information, see <a
 *  href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Integrating.AutoScaling.html">Using Amazon Aurora
 *  Auto Scaling with Aurora
 * 
 *  Replicas</a>> </li> <li>
 * 
 *  Amazon SageMaker endpoints. For more information, see <a
 *  href="http://docs.aws.amazon.com/sagemaker/latest/dg/endpoint-auto-scaling.html">Automatically Scaling Amazon SageMaker
 * 
 *  Models</a>> </li> </ul>
 * 
 *  To configure automatic scaling for multiple resources across multiple services, use AWS Auto Scaling to create a scaling
 *  plan for your application. For more information, see <a href="http://aws.amazon.com/autoscaling">AWS Auto
 * 
 *  Scaling</a>>
 * 
 *  For a list of supported regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#as-app_region">AWS
 *  Regions and Endpoints: Application Auto Scaling</a> in the <i>AWS General
 *
 * \sa ApplicationAutoScalingClient::describeScheduledActions
 */

/*!
 * @brief  Constructs a new DescribeScheduledActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest(const DescribeScheduledActionsRequest &other)
    : ApplicationAutoScalingRequest(new DescribeScheduledActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeScheduledActionsRequest object.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest()
    : ApplicationAutoScalingRequest(new DescribeScheduledActionsRequestPrivate(ApplicationAutoScalingRequest::DescribeScheduledActionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScheduledActionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeScheduledActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScheduledActionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduledActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduledActionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeScheduledActionsRequestPrivate
 *
 * @brief  Private implementation for DescribeScheduledActionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledActionsRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScheduledActionsRequest instance.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DescribeScheduledActionsRequest * const q)
    : ApplicationAutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduledActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScheduledActionsRequest instance.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const DescribeScheduledActionsRequestPrivate &other, DescribeScheduledActionsRequest * const q)
    : ApplicationAutoScalingRequestPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
