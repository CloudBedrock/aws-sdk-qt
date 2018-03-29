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

#include "registerecsclusterrequest.h"
#include "registerecsclusterrequest_p.h"
#include "registerecsclusterresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  RegisterEcsClusterRequest
 *
 * @brief  Implements OpsWorks RegisterEcsCluster requests.
 *
 * @see    OpsWorksClient::registerEcsCluster
 */

/**
 * @brief  Constructs a new RegisterEcsClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterEcsClusterRequest::RegisterEcsClusterRequest(const RegisterEcsClusterRequest &other)
    : OpsWorksRequest(new RegisterEcsClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterEcsClusterRequest object.
 */
RegisterEcsClusterRequest::RegisterEcsClusterRequest()
    : OpsWorksRequest(new RegisterEcsClusterRequestPrivate(OpsWorksRequest::RegisterEcsClusterAction, this))
{

}

bool RegisterEcsClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterEcsClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterEcsClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterEcsClusterRequest::response(QNetworkReply * const reply) const
{
    return new RegisterEcsClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterEcsClusterRequestPrivate
 *
 * @brief  Private implementation for RegisterEcsClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEcsClusterRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RegisterEcsClusterRequest instance.
 */
RegisterEcsClusterRequestPrivate::RegisterEcsClusterRequestPrivate(
    const OpsWorksRequest::Action action, RegisterEcsClusterRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEcsClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterEcsClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterEcsClusterRequest instance.
 */
RegisterEcsClusterRequestPrivate::RegisterEcsClusterRequestPrivate(
    const RegisterEcsClusterRequestPrivate &other, RegisterEcsClusterRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
