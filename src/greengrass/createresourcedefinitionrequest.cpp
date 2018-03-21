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

#include "createresourcedefinitionrequest.h"
#include "createresourcedefinitionrequest_p.h"
#include "createresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateResourceDefinitionRequest
 *
 * @brief  Implements Greengrass CreateResourceDefinition requests.
 *
 * @see    GreengrassClient::createResourceDefinition
 */

/**
 * @brief  Constructs a new CreateResourceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceDefinitionResponse::CreateResourceDefinitionResponse(

/**
 * @brief  Constructs a new CreateResourceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceDefinitionRequest::CreateResourceDefinitionRequest(const CreateResourceDefinitionRequest &other)
    : GreengrassRequest(new CreateResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceDefinitionRequest object.
 */
CreateResourceDefinitionRequest::CreateResourceDefinitionRequest()
    : GreengrassRequest(new CreateResourceDefinitionRequestPrivate(GreengrassRequest::CreateResourceDefinitionAction, this))
{

}

bool CreateResourceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateResourceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateResourceDefinitionRequest instance.
 */
CreateResourceDefinitionRequestPrivate::CreateResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateResourceDefinitionRequest * const q)
    : CreateResourceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceDefinitionRequest instance.
 */
CreateResourceDefinitionRequestPrivate::CreateResourceDefinitionRequestPrivate(
    const CreateResourceDefinitionRequestPrivate &other, CreateResourceDefinitionRequest * const q)
    : CreateResourceDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
