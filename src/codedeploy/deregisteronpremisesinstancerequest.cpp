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

#include "deregisteronpremisesinstancerequest.h"
#include "deregisteronpremisesinstancerequest_p.h"
#include "deregisteronpremisesinstanceresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  DeregisterOnPremisesInstanceRequest
 *
 * @brief  Implements CodeDeploy DeregisterOnPremisesInstance requests.
 *
 * @see    CodeDeployClient::deregisterOnPremisesInstance
 */

/**
 * @brief  Constructs a new DeregisterOnPremisesInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterOnPremisesInstanceResponse::DeregisterOnPremisesInstanceResponse(

/**
 * @brief  Constructs a new DeregisterOnPremisesInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterOnPremisesInstanceRequest::DeregisterOnPremisesInstanceRequest(const DeregisterOnPremisesInstanceRequest &other)
    : CodeDeployRequest(new DeregisterOnPremisesInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterOnPremisesInstanceRequest object.
 */
DeregisterOnPremisesInstanceRequest::DeregisterOnPremisesInstanceRequest()
    : CodeDeployRequest(new DeregisterOnPremisesInstanceRequestPrivate(CodeDeployRequest::DeregisterOnPremisesInstanceAction, this))
{

}

bool DeregisterOnPremisesInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterOnPremisesInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterOnPremisesInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * DeregisterOnPremisesInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterOnPremisesInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterOnPremisesInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterOnPremisesInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterOnPremisesInstanceRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public DeregisterOnPremisesInstanceRequest instance.
 */
DeregisterOnPremisesInstanceRequestPrivate::DeregisterOnPremisesInstanceRequestPrivate(
    const CodeDeployRequest::Action action, DeregisterOnPremisesInstanceRequest * const q)
    : DeregisterOnPremisesInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterOnPremisesInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterOnPremisesInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterOnPremisesInstanceRequest instance.
 */
DeregisterOnPremisesInstanceRequestPrivate::DeregisterOnPremisesInstanceRequestPrivate(
    const DeregisterOnPremisesInstanceRequestPrivate &other, DeregisterOnPremisesInstanceRequest * const q)
    : DeregisterOnPremisesInstancePrivate(other, q)
{

}
