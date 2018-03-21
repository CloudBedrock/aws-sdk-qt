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

#include "describetaskdefinitionrequest.h"
#include "describetaskdefinitionrequest_p.h"
#include "describetaskdefinitionresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  DescribeTaskDefinitionRequest
 *
 * @brief  Implements ECS DescribeTaskDefinition requests.
 *
 * @see    ECSClient::describeTaskDefinition
 */

/**
 * @brief  Constructs a new DescribeTaskDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTaskDefinitionResponse::DescribeTaskDefinitionResponse(

/**
 * @brief  Constructs a new DescribeTaskDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTaskDefinitionRequest::DescribeTaskDefinitionRequest(const DescribeTaskDefinitionRequest &other)
    : ECSRequest(new DescribeTaskDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTaskDefinitionRequest object.
 */
DescribeTaskDefinitionRequest::DescribeTaskDefinitionRequest()
    : ECSRequest(new DescribeTaskDefinitionRequestPrivate(ECSRequest::DescribeTaskDefinitionAction, this))
{

}

bool DescribeTaskDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTaskDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTaskDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * DescribeTaskDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTaskDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTaskDefinitionRequestPrivate
 *
 * @brief  Private implementation for DescribeTaskDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTaskDefinitionRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DescribeTaskDefinitionRequest instance.
 */
DescribeTaskDefinitionRequestPrivate::DescribeTaskDefinitionRequestPrivate(
    const ECSRequest::Action action, DescribeTaskDefinitionRequest * const q)
    : DescribeTaskDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTaskDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTaskDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTaskDefinitionRequest instance.
 */
DescribeTaskDefinitionRequestPrivate::DescribeTaskDefinitionRequestPrivate(
    const DescribeTaskDefinitionRequestPrivate &other, DescribeTaskDefinitionRequest * const q)
    : DescribeTaskDefinitionPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
