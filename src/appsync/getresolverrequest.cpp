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

#include "getresolverrequest.h"
#include "getresolverrequest_p.h"
#include "getresolverresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  GetResolverRequest
 *
 * @brief  Implements AppSync GetResolver requests.
 *
 * @see    AppSyncClient::getResolver
 */

/**
 * @brief  Constructs a new GetResolverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResolverRequest::GetResolverRequest(const GetResolverRequest &other)
    : AppSyncRequest(new GetResolverRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResolverRequest object.
 */
GetResolverRequest::GetResolverRequest()
    : AppSyncRequest(new GetResolverRequestPrivate(AppSyncRequest::GetResolverAction, this))
{

}

bool GetResolverRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResolverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResolverResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * GetResolverRequest::response(QNetworkReply * const reply) const
{
    return new GetResolverResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResolverRequestPrivate
 *
 * @brief  Private implementation for GetResolverRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResolverRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetResolverRequest instance.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const AppSyncRequest::Action action, GetResolverRequest * const q)
    : GetResolverPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResolverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResolverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResolverRequest instance.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const GetResolverRequestPrivate &other, GetResolverRequest * const q)
    : GetResolverPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
