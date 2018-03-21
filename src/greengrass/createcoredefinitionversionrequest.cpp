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

#include "createcoredefinitionversionrequest.h"
#include "createcoredefinitionversionrequest_p.h"
#include "createcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateCoreDefinitionVersionRequest
 *
 * @brief  Implements Greengrass CreateCoreDefinitionVersion requests.
 *
 * @see    GreengrassClient::createCoreDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateCoreDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCoreDefinitionVersionResponse::CreateCoreDefinitionVersionResponse(

/**
 * @brief  Constructs a new CreateCoreDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest(const CreateCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCoreDefinitionVersionRequest object.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest()
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(GreengrassRequest::CreateCoreDefinitionVersionAction, this))
{

}

bool CreateCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCoreDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCoreDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCoreDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for CreateCoreDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateCoreDefinitionVersionRequest instance.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionVersionRequest * const q)
    : CreateCoreDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCoreDefinitionVersionRequest instance.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const CreateCoreDefinitionVersionRequestPrivate &other, CreateCoreDefinitionVersionRequest * const q)
    : CreateCoreDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
