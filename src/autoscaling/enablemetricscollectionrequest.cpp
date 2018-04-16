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

#include "enablemetricscollectionrequest.h"
#include "enablemetricscollectionrequest_p.h"
#include "enablemetricscollectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionRequest
 *
 * \brief The EnableMetricsCollectionRequest class encapsulates AutoScaling EnableMetricsCollection requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::enableMetricsCollection
 */

/*!
 * @brief  Constructs a new EnableMetricsCollectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest(const EnableMetricsCollectionRequest &other)
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new EnableMetricsCollectionRequest object.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest()
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(AutoScalingRequest::EnableMetricsCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool EnableMetricsCollectionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an EnableMetricsCollectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableMetricsCollectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableMetricsCollectionRequest::response(QNetworkReply * const reply) const
{
    return new EnableMetricsCollectionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  EnableMetricsCollectionRequestPrivate
 *
 * @brief  Private implementation for EnableMetricsCollectionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableMetricsCollectionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public EnableMetricsCollectionRequest instance.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const AutoScalingRequest::Action action, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new EnableMetricsCollectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableMetricsCollectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableMetricsCollectionRequest instance.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const EnableMetricsCollectionRequestPrivate &other, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
