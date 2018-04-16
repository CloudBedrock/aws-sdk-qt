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

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeletePolicyRequest
 *
 * \brief The DeletePolicyRequest class encapsulates AutoScaling DeletePolicy requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::deletePolicy
 */

/*!
 * @brief  Constructs a new DeletePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : AutoScalingRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : AutoScalingRequest(new DeletePolicyRequestPrivate(AutoScalingRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeletePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeletePolicyRequestPrivate
 *
 * @brief  Private implementation for DeletePolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const AutoScalingRequest::Action action, DeletePolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
