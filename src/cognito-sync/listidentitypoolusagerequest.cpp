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

#include "listidentitypoolusagerequest.h"
#include "listidentitypoolusagerequest_p.h"
#include "listidentitypoolusageresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  ListIdentityPoolUsageRequest
 *
 * @brief  Implements CognitoSync ListIdentityPoolUsage requests.
 *
 * @see    CognitoSyncClient::listIdentityPoolUsage
 */

/**
 * @brief  Constructs a new ListIdentityPoolUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIdentityPoolUsageRequest::ListIdentityPoolUsageRequest(const ListIdentityPoolUsageRequest &other)
    : CognitoSyncRequest(new ListIdentityPoolUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIdentityPoolUsageRequest object.
 */
ListIdentityPoolUsageRequest::ListIdentityPoolUsageRequest()
    : CognitoSyncRequest(new ListIdentityPoolUsageRequestPrivate(CognitoSyncRequest::ListIdentityPoolUsageAction, this))
{

}

bool ListIdentityPoolUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIdentityPoolUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIdentityPoolUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * ListIdentityPoolUsageRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityPoolUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIdentityPoolUsageRequestPrivate
 *
 * @brief  Private implementation for ListIdentityPoolUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolUsageRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public ListIdentityPoolUsageRequest instance.
 */
ListIdentityPoolUsageRequestPrivate::ListIdentityPoolUsageRequestPrivate(
    const CognitoSyncRequest::Action action, ListIdentityPoolUsageRequest * const q)
    : ListIdentityPoolUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityPoolUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIdentityPoolUsageRequest instance.
 */
ListIdentityPoolUsageRequestPrivate::ListIdentityPoolUsageRequestPrivate(
    const ListIdentityPoolUsageRequestPrivate &other, ListIdentityPoolUsageRequest * const q)
    : ListIdentityPoolUsagePrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS
