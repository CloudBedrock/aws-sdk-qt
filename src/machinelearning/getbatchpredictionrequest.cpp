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

#include "getbatchpredictionrequest.h"
#include "getbatchpredictionrequest_p.h"
#include "getbatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  GetBatchPredictionRequest
 *
 * @brief  Implements MachineLearning GetBatchPrediction requests.
 *
 * @see    MachineLearningClient::getBatchPrediction
 */

/**
 * @brief  Constructs a new GetBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBatchPredictionResponse::GetBatchPredictionResponse(

/**
 * @brief  Constructs a new GetBatchPredictionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest(const GetBatchPredictionRequest &other)
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBatchPredictionRequest object.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest()
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(MachineLearningRequest::GetBatchPredictionAction, this))
{

}

bool GetBatchPredictionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBatchPredictionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBatchPredictionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * GetBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new GetBatchPredictionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBatchPredictionRequestPrivate
 *
 * @brief  Private implementation for GetBatchPredictionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBatchPredictionRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public GetBatchPredictionRequest instance.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, GetBatchPredictionRequest * const q)
    : GetBatchPredictionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBatchPredictionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBatchPredictionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBatchPredictionRequest instance.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const GetBatchPredictionRequestPrivate &other, GetBatchPredictionRequest * const q)
    : GetBatchPredictionPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
