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

#include "expiresessionrequest.h"
#include "expiresessionrequest_p.h"
#include "expiresessionresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  ExpireSessionRequest
 *
 * @brief  Implements AppStream ExpireSession requests.
 *
 * @see    AppStreamClient::expireSession
 */

/**
 * @brief  Constructs a new ExpireSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExpireSessionRequest::ExpireSessionRequest(const ExpireSessionRequest &other)
    : AppStreamRequest(new ExpireSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ExpireSessionRequest object.
 */
ExpireSessionRequest::ExpireSessionRequest()
    : AppStreamRequest(new ExpireSessionRequestPrivate(AppStreamRequest::ExpireSessionAction, this))
{

}

bool ExpireSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ExpireSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExpireSessionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * ExpireSessionRequest::response(QNetworkReply * const reply) const
{
    return new ExpireSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ExpireSessionRequestPrivate
 *
 * @brief  Private implementation for ExpireSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExpireSessionRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public ExpireSessionRequest instance.
 */
ExpireSessionRequestPrivate::ExpireSessionRequestPrivate(
    const AppStreamRequest::Action action, ExpireSessionRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ExpireSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExpireSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExpireSessionRequest instance.
 */
ExpireSessionRequestPrivate::ExpireSessionRequestPrivate(
    const ExpireSessionRequestPrivate &other, ExpireSessionRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
