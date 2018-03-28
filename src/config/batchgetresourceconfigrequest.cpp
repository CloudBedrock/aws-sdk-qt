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

#include "batchgetresourceconfigrequest.h"
#include "batchgetresourceconfigrequest_p.h"
#include "batchgetresourceconfigresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  BatchGetResourceConfigRequest
 *
 * @brief  Implements ConfigService BatchGetResourceConfig requests.
 *
 * @see    ConfigServiceClient::batchGetResourceConfig
 */

/**
 * @brief  Constructs a new BatchGetResourceConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetResourceConfigRequest::BatchGetResourceConfigRequest(const BatchGetResourceConfigRequest &other)
    : ConfigServiceRequest(new BatchGetResourceConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetResourceConfigRequest object.
 */
BatchGetResourceConfigRequest::BatchGetResourceConfigRequest()
    : ConfigServiceRequest(new BatchGetResourceConfigRequestPrivate(ConfigServiceRequest::BatchGetResourceConfigAction, this))
{

}

bool BatchGetResourceConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetResourceConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetResourceConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * BatchGetResourceConfigRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetResourceConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetResourceConfigRequestPrivate
 *
 * @brief  Private implementation for BatchGetResourceConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetResourceConfigRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public BatchGetResourceConfigRequest instance.
 */
BatchGetResourceConfigRequestPrivate::BatchGetResourceConfigRequestPrivate(
    const ConfigServiceRequest::Action action, BatchGetResourceConfigRequest * const q)
    : BatchGetResourceConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetResourceConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetResourceConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetResourceConfigRequest instance.
 */
BatchGetResourceConfigRequestPrivate::BatchGetResourceConfigRequestPrivate(
    const BatchGetResourceConfigRequestPrivate &other, BatchGetResourceConfigRequest * const q)
    : BatchGetResourceConfigPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
