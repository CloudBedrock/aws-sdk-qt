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

#include "stopqueryexecutionrequest.h"
#include "stopqueryexecutionrequest_p.h"
#include "stopqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::StopQueryExecutionRequest
 *
 * \brief The StopQueryExecutionRequest class provides an interface for Athena StopQueryExecution requests.
 *
 * \ingroup Athena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::stopQueryExecution
 */

/*!
 * @brief  Constructs a new StopQueryExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopQueryExecutionRequest::StopQueryExecutionRequest(const StopQueryExecutionRequest &other)
    : AthenaRequest(new StopQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopQueryExecutionRequest object.
 */
StopQueryExecutionRequest::StopQueryExecutionRequest()
    : AthenaRequest(new StopQueryExecutionRequestPrivate(AthenaRequest::StopQueryExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StopQueryExecutionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopQueryExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopQueryExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AthenaClient::send
 */
QtAws::Core::AwsAbstractResponse * StopQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StopQueryExecutionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopQueryExecutionRequestPrivate
 *
 * @brief  Private implementation for StopQueryExecutionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopQueryExecutionRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public StopQueryExecutionRequest instance.
 */
StopQueryExecutionRequestPrivate::StopQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, StopQueryExecutionRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopQueryExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopQueryExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopQueryExecutionRequest instance.
 */
StopQueryExecutionRequestPrivate::StopQueryExecutionRequestPrivate(
    const StopQueryExecutionRequestPrivate &other, StopQueryExecutionRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
