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

#include "listsubscriptionsrequest.h"
#include "listsubscriptionsrequest_p.h"
#include "listsubscriptionsresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  ListSubscriptionsRequest
 *
 * @brief  Implements SNS ListSubscriptions requests.
 *
 * @see    SNSClient::listSubscriptions
 */

/**
 * @brief  Constructs a new ListSubscriptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSubscriptionsRequest::ListSubscriptionsRequest(const ListSubscriptionsRequest &other)
    : SNSRequest(new ListSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSubscriptionsRequest object.
 */
ListSubscriptionsRequest::ListSubscriptionsRequest()
    : SNSRequest(new ListSubscriptionsRequestPrivate(SNSRequest::ListSubscriptionsAction, this))
{

}

bool ListSubscriptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSubscriptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSubscriptionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscriptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSubscriptionsRequestPrivate
 *
 * @brief  Private implementation for ListSubscriptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListSubscriptionsRequest instance.
 */
ListSubscriptionsRequestPrivate::ListSubscriptionsRequestPrivate(
    const SNSRequest::Action action, ListSubscriptionsRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSubscriptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSubscriptionsRequest instance.
 */
ListSubscriptionsRequestPrivate::ListSubscriptionsRequestPrivate(
    const ListSubscriptionsRequestPrivate &other, ListSubscriptionsRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
