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

#include "createactivationrequest.h"
#include "createactivationrequest_p.h"
#include "createactivationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  CreateActivationRequest
 *
 * @brief  Implements SSM CreateActivation requests.
 *
 * @see    SSMClient::createActivation
 */

/**
 * @brief  Constructs a new CreateActivationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateActivationRequest::CreateActivationRequest(const CreateActivationRequest &other)
    : SSMRequest(new CreateActivationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateActivationRequest object.
 */
CreateActivationRequest::CreateActivationRequest()
    : SSMRequest(new CreateActivationRequestPrivate(SSMRequest::CreateActivationAction, this))
{

}

bool CreateActivationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateActivationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateActivationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateActivationRequest::response(QNetworkReply * const reply) const
{
    return new CreateActivationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateActivationRequestPrivate
 *
 * @brief  Private implementation for CreateActivationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateActivationRequest instance.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const SSMRequest::Action action, CreateActivationRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateActivationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateActivationRequest instance.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const CreateActivationRequestPrivate &other, CreateActivationRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
