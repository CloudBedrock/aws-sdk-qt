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

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  CancelJobRequest
 *
 * @brief  Implements ElasticTranscoder CancelJob requests.
 *
 * @see    ElasticTranscoderClient::cancelJob
 */

/**
 * @brief  Constructs a new CancelJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : ElasticTranscoderRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : ElasticTranscoderRequest(new CancelJobRequestPrivate(ElasticTranscoderRequest::CancelJobAction, this))
{

}

bool CancelJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelJobRequestPrivate
 *
 * @brief  Private implementation for CancelJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelJobRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public CancelJobRequest instance.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const ElasticTranscoderRequest::Action action, CancelJobRequest * const q)
    : CancelJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelJobRequest instance.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : CancelJobPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS
