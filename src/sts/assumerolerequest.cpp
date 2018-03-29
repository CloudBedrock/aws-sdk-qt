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

#include "assumerolerequest.h"
#include "assumerolerequest_p.h"
#include "assumeroleresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/**
 * @class  AssumeRoleRequest
 *
 * @brief  Implements STS AssumeRole requests.
 *
 * @see    STSClient::assumeRole
 */

/**
 * @brief  Constructs a new AssumeRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssumeRoleRequest::AssumeRoleRequest(const AssumeRoleRequest &other)
    : STSRequest(new AssumeRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssumeRoleRequest object.
 */
AssumeRoleRequest::AssumeRoleRequest()
    : STSRequest(new AssumeRoleRequestPrivate(STSRequest::AssumeRoleAction, this))
{

}

bool AssumeRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssumeRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssumeRoleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  STSClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssumeRoleRequestPrivate
 *
 * @brief  Private implementation for AssumeRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public AssumeRoleRequest instance.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const STSRequest::Action action, AssumeRoleRequest * const q)
    : STSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssumeRoleRequest instance.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const AssumeRoleRequestPrivate &other, AssumeRoleRequest * const q)
    : STSRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
