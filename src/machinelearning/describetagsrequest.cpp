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

#include "describetagsrequest.h"
#include "describetagsrequest_p.h"
#include "describetagsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeTagsRequest
 *
 * \brief The DescribeTagsRequest class provides an interface for MachineLearning DescribeTags requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::describeTags
 */

/*!
 * @brief  Constructs a new DescribeTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTagsRequest::DescribeTagsRequest(const DescribeTagsRequest &other)
    : MachineLearningRequest(new DescribeTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeTagsRequest object.
 */
DescribeTagsRequest::DescribeTagsRequest()
    : MachineLearningRequest(new DescribeTagsRequestPrivate(MachineLearningRequest::DescribeTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTagsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeTagsRequestPrivate
 *
 * @brief  Private implementation for DescribeTagsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeTagsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DescribeTagsRequestPrivate &other, DescribeTagsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
