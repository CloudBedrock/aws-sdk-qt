/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionrequest_p.h"
#include "deleteeventsubscriptionresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteEventSubscriptionRequest
 *
 * @brief  Implements Redshift DeleteEventSubscription requests.
 *
 * @see    RedshiftClient::deleteEventSubscription
 */

/**
 * @brief  Constructs a new DeleteEventSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest(const DeleteEventSubscriptionRequest &other)
    : RedshiftRequest(new DeleteEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEventSubscriptionRequest object.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest()
    : RedshiftRequest(new DeleteEventSubscriptionRequestPrivate(RedshiftRequest::DeleteEventSubscriptionAction, this))
{

}

bool DeleteEventSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEventSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEventSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEventSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DeleteEventSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSubscriptionRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteEventSubscriptionRequest instance.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const RedshiftRequest::Action action, DeleteEventSubscriptionRequest * const q)
    : DeleteEventSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEventSubscriptionRequest instance.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const DeleteEventSubscriptionRequestPrivate &other, DeleteEventSubscriptionRequest * const q)
    : DeleteEventSubscriptionPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
