/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteconfigurationaggregatorresponse.h"
#include "deleteconfigurationaggregatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DeleteConfigurationAggregatorResponse
 * \brief The DeleteConfigurationAggregatorResponse class provides an interace for ConfigService DeleteConfigurationAggregator responses.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>AWS Config</fullname>
 * 
 *  AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 *  You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 *  about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 *  Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a security group. For a complete list of
 *  resources currently supported by AWS Config, see <a
 *  href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 * 
 *  Guide</i>> <ul> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li/>
 *  <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li> </li> <li/> <li/> <li/> <li/>
 *
 * \sa ConfigServiceClient::deleteConfigurationAggregator
 */

/*!
 * Constructs a DeleteConfigurationAggregatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationAggregatorResponse::DeleteConfigurationAggregatorResponse(
        const DeleteConfigurationAggregatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteConfigurationAggregatorResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationAggregatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationAggregatorRequest * DeleteConfigurationAggregatorResponse::request() const
{
    Q_D(const DeleteConfigurationAggregatorResponse);
    return static_cast<const DeleteConfigurationAggregatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConfigService DeleteConfigurationAggregator \a response.
 */
void DeleteConfigurationAggregatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigurationAggregatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConfigService::DeleteConfigurationAggregatorResponsePrivate
 * \brief The DeleteConfigurationAggregatorResponsePrivate class provides private implementation for DeleteConfigurationAggregatorResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a DeleteConfigurationAggregatorResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationAggregatorResponsePrivate::DeleteConfigurationAggregatorResponsePrivate(
    DeleteConfigurationAggregatorResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * Parses a ConfigService DeleteConfigurationAggregator response element from \a xml.
 */
void DeleteConfigurationAggregatorResponsePrivate::parseDeleteConfigurationAggregatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationAggregatorResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
