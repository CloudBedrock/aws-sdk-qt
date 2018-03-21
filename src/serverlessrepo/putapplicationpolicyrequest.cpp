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

#include "putapplicationpolicyrequest.h"
#include "putapplicationpolicyrequest_p.h"
#include "putapplicationpolicyresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  PutApplicationPolicyRequest
 *
 * @brief  Implements ServerlessApplicationRepository PutApplicationPolicy requests.
 *
 * @see    ServerlessApplicationRepositoryClient::putApplicationPolicy
 */

/**
 * @brief  Constructs a new PutApplicationPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutApplicationPolicyResponse::PutApplicationPolicyResponse(

/**
 * @brief  Constructs a new PutApplicationPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutApplicationPolicyRequest::PutApplicationPolicyRequest(const PutApplicationPolicyRequest &other)
    : ServerlessApplicationRepositoryRequest(new PutApplicationPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutApplicationPolicyRequest object.
 */
PutApplicationPolicyRequest::PutApplicationPolicyRequest()
    : ServerlessApplicationRepositoryRequest(new PutApplicationPolicyRequestPrivate(ServerlessApplicationRepositoryRequest::PutApplicationPolicyAction, this))
{

}

bool PutApplicationPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutApplicationPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutApplicationPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
AwsAbstractResponse * PutApplicationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutApplicationPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutApplicationPolicyRequestPrivate
 *
 * @brief  Private implementation for PutApplicationPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutApplicationPolicyRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public PutApplicationPolicyRequest instance.
 */
PutApplicationPolicyRequestPrivate::PutApplicationPolicyRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, PutApplicationPolicyRequest * const q)
    : PutApplicationPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutApplicationPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutApplicationPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutApplicationPolicyRequest instance.
 */
PutApplicationPolicyRequestPrivate::PutApplicationPolicyRequestPrivate(
    const PutApplicationPolicyRequestPrivate &other, PutApplicationPolicyRequest * const q)
    : PutApplicationPolicyPrivate(other, q)
{

}
