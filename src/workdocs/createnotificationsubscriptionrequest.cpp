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

#include "createnotificationsubscriptionrequest.h"
#include "createnotificationsubscriptionrequest_p.h"
#include "createnotificationsubscriptionresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateNotificationSubscriptionRequest
 *
 * @brief  Implements WorkDocs CreateNotificationSubscription requests.
 *
 * @see    WorkDocsClient::createNotificationSubscription
 */

/**
 * @brief  Constructs a new CreateNotificationSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNotificationSubscriptionRequest::CreateNotificationSubscriptionRequest(const CreateNotificationSubscriptionRequest &other)
    : WorkDocsRequest(new CreateNotificationSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNotificationSubscriptionRequest object.
 */
CreateNotificationSubscriptionRequest::CreateNotificationSubscriptionRequest()
    : WorkDocsRequest(new CreateNotificationSubscriptionRequestPrivate(WorkDocsRequest::CreateNotificationSubscriptionAction, this))
{

}

bool CreateNotificationSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNotificationSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNotificationSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * CreateNotificationSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotificationSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNotificationSubscriptionRequestPrivate
 *
 * @brief  Private implementation for CreateNotificationSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationSubscriptionRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public CreateNotificationSubscriptionRequest instance.
 */
CreateNotificationSubscriptionRequestPrivate::CreateNotificationSubscriptionRequestPrivate(
    const WorkDocsRequest::Action action, CreateNotificationSubscriptionRequest * const q)
    : CreateNotificationSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNotificationSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNotificationSubscriptionRequest instance.
 */
CreateNotificationSubscriptionRequestPrivate::CreateNotificationSubscriptionRequestPrivate(
    const CreateNotificationSubscriptionRequestPrivate &other, CreateNotificationSubscriptionRequest * const q)
    : CreateNotificationSubscriptionPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
